#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if(n==1) return 1;
    return n*fact(n-1);
}

int main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   printf("%d",fact(n));
}
