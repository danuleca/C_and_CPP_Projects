#include <stdio.h>
int main ()
{
    int a,n,br=0,p;
    do
    {
        a++;p=a;
        while(a>0)
        {
            a = a % 10;
            if(n==1 || n==3 || n==5 || n==7)
            {
                if(a<=0)br++;

            }
        }
        a=p;
        p=0;
    }
    while(br!=666);
    printf("Chislo = %d",a);
        do
    {
        a++;p=a;
        while(a>0)
        {
            a = a % 10;
            if(n==1 || n==3 || n==5 || n==7)
            {
                if(a<=0)br++;

            }
        }
        a=p;
        p=0;

    }while(a!=3551);
    printf("3551 e nomer %d",br);
}
