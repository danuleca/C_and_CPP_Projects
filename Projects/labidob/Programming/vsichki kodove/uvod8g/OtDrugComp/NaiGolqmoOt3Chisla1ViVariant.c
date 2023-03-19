#include<stdio.h>

void main()
{
    int a,b,c,max;
    scanf("%d", &a);
    max = a;
    scanf("%d", &b);
    if(b>=max)
    {
        max = b;
    }
    scanf("%d", &c);

    if(c>=max)
    {
        max = c;
    }

    printf("%d",max);
}
