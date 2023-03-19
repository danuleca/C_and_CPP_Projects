#include <stdio.h>
#include <stdlib.h>

int bToN(int);

int main()
{
    int b;
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Sum from 1 to %d is %d",b,bToN(b));
}

int bToN(int n)
{
    if(n==1) return 1;
    return n+bToN(n-1);
}
