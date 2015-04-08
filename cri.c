#include<stdio.h>
#include<math.h>
int to10();
int from10();
int *lirechifre(int *cpt);
int main()
{
    int a,b,*cpt,nbr;
    int*t;
    printf("donner la base de depart et la base de fin \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("le chifre a converter (ecrire point a la fin du chifre) \n");
    t=lirechifre(cpt);
    nbr=to10(a,t,*cpt);
    printf("\n le nbr : %d",nbr);




}
int *lirechifre(int *cpt)
{
    char x;
    int nbr=0,i=0,t[20];

    //((*cpt)) --> lka valeur de cpt



getchar();
    while(x!='\n')
    {
        x=getchar();
        if(x=='.')
        {
            break;
        }

            if((x>=48)&&(x<=57))
            {t[(*cpt)]=x-48;(*cpt)++;}
        else
        {
            if(x=='a') {t[(*cpt)]=10;(*cpt)++;}
            if(x=='b') {t[(*cpt)]=11;(*cpt)++;}
            if(x=='c') {t[(*cpt)]=12;(*cpt)++;}
            if(x=='d') {t[(*cpt)]=13;(*cpt)++;}
            if(x=='e') {t[(*cpt)]=14;(*cpt)++;}
            if(x=='f') {t[(*cpt)]=15;(*cpt)++;}
        }

    }
    for(i=0;i<(*cpt);i++)
    {
        printf("%d \t",t[i]);
    }

return t;
}
int to10(int t[20],int x,int *cpt)
{

    int i,a,nbr=0;
    for(i=0;i<(*cpt);i++)
    {

        a--;
        nbr=nbr+(t[i]*pow(x,a));

    }
    return nbr;
}
