#include <stdio.h>
#include <stdlib.h>

int isMagicNumber(int n)
{
    while(n>0)
    {
        int d=n%10;
        if(d!=1 && d!=3 && d!=5 && d!=7) return 0;
        n/=10;
    }
    return 1;
}

void task1()
{

    int count = 0;
    for(int i=1; i<=3551; i++)
    {
        if(isMagicNumber(i)) count++;
    }
    printf("The number 3551 is at number %d\n",count);
}

void task2()
{
    int count = 0;
    int i = 0;
    while(count!=666)
    {
        i++;
        if(isMagicNumber(i)) count++;
    }
    printf("The 666th number is %d\n",i);
}

int main ()
{
    task1();
    task2();
}
