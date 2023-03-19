#include <stdio.h>
#include <stdlib.h>

int is_digit_unique(int n, int digit)
{
    while(n>0)
    {
        int digit2 = n%10;
        n/=10;
        if(digit2==digit) return 0;
    }
    return 1;
}

int different_digits(int n)
{
    while(n>0)
    {
        int digit = n%10;
        n/=10;
        if(!is_digit_unique(n,digit)) return 0;
    }
    return 1;
}

int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int count=0;
    for(int i=m;i<=n;i++)
    {
        if (different_digits(i)) count++;
    }
    printf("Count = %d",count);
}
