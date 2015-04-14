#include<stdio.h>
#include<math.h>
void to10(int *x);
void from10(int *nbr,int *b);
void lirechifre(int *nbr);
int main()
{
    int a,b,nbr=0;
    printf("donner la base de depart et la base de fin \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("le chifre a converter  \n");
    lirechifre(&nbr);
    printf("\n le nbr : %d",nbr);
    to10(&nbr);
    printf("\n le nbr : %d",nbr);
    from10(&nbr,&b);
    printf("\n le nbr final : %d",nbr);
}
void lirechifre(int *nbr)
{
    char x;
    int i=0,t[20],c,cpt=0;

    //((cpt)) --> lka valeur de cpt



getchar();
    while(x!='\n')
    {
        x=getchar();


            if((x>=48)&&(x<=57))
            {t[(cpt)]=x-48;(cpt)++;}
        else
        {
            if(x=='a') {t[(cpt)]=10;(cpt)++;}
            if(x=='b') {t[(cpt)]=11;(cpt)++;}
            if(x=='c') {t[(cpt)]=12;(cpt)++;}
            if(x=='d') {t[(cpt)]=13;(cpt)++;}
            if(x=='e') {t[(cpt)]=14;(cpt)++;}
            if(x=='f') {t[(cpt)]=15;(cpt)++;}
        }
    c=cpt;
    }
    for(i=0;i<(cpt);i++)
    {
        c--;
        (*nbr)=(*nbr)+(t[i]*pow(10,c));

    }


}
void to10(int *x)
{

    int i,e,d=0,b,u=0,nbrr=0;
   printf("\n le x=%d \n",(*x));
   e=(*x);
   while(e!=0)
   {
       b=e%10;
       e=e/10;
       d++;
   }
    b=0;
    u=d;
    printf("\n le d= %d \n",d);
    for(i=0;i<(d);i++)
    {
       b=(*x)%10;
        nbrr=nbrr+(b*pow(10,i));
        printf("\n le nbrr = %d \n",nbrr);
        (*x)=(*x)/10;
    }
    (*x)=nbrr;
}
void from10(int *nbr,int *b)
{
    int a=0,i=0;
    printf("\n le *nbr= %d \n",(*nbr));
    printf("\n le *b= %d \n",(*b));
    while((*nbr)!=0)
    {
        printf("\n le a= %d \n",a);
       a=a+(((*nbr)%(*b))*pow(10,i));
       i++;
       (*nbr)=(*nbr)/(*b);
    }
    (*nbr)=a;
}
