#include <stdio.h>
#include <stdlib.h>

int dalidadenacifrasesreshtavzapisanan (int n,int num)
{
    int da=0;
    while(n>0)
    {
        if(n%10==num)
        {
            da=1;
            break;
        }
        n=n/10;
    }
    if(da==1)printf("da\n");
    else printf("ne\n");
}
int kolkoputidadenacifrasesreshtavzapisanan (int n,int num)
{
    int br=0;

    while(n>0)
    {
        if(n%10==num)
        {
            br++;
        }
        n = n/10;
    }
     if(n>=0)printf("%d\n",br);
    else printf("ne se sreshta\n");
}
int  dalineprostoiline (int n)
{
    int k=2;
    while(n%k!=0)
    {
        k = k + 1;
    }
    if(n==k)
    {
        printf("DA");
    }
    else
    {
        printf("NE");
    }

}
int  ananta ()
{
    float a,k,step;

    scanf("%f",&a);
    scanf("%f",&k);
    step = k;
    while(a>1)
    {
        k = k*step;
        a--;
    }

    printf("krai: %f",k);
}



int main ()
{
    int op,n,num,a,step;
    do
    {
        printf("1. dali dad.cifra se sreshta v zapisa na n\n2. koko puti se sreshta dad. cifra v zapisa na n\n3. dali n e prosto chislo\n4. a na Nta stepen\n5. exit\n> ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("chislo: ");
            scanf("%d",&n);
            printf("cifra: ");
            scanf("%d",&num);
            dalidadenacifrasesreshtavzapisanan(n,num);
            break;
        case 2:
            printf("chislo: ");
            scanf("%d",&n);
            printf("cifra: ");
            scanf("%d",&num);
            kolkoputidadenacifrasesreshtavzapisanan (n,num);
            break;
        case 3:
            printf("chislo: ");
            scanf("%d",&n);
            dalineprostoiline(n);
            break;
        case 4:
            printf("vuvedete a: ");
            scanf("%d",&a);
            printf("vuvedete step: ");
            scanf("%d",&step);
            ananta(a,step);
            break;
        case 5:
            break;
        default:
            printf("invalid option\n");

        }
    }
    while(op!=5);

    return 0 ;

}
