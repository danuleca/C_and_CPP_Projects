#include<stdio.h>

int main()
{
    int a,n,step;

    scanf("%d\n%d",&n,&a);
    step = n;
    while(a>1)
    {
        n = n*step;
        a--;
    }

    printf("krai: %d",n);
}
