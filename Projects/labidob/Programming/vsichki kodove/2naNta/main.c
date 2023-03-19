#include <stdio.h>
#include <stdlib.h>

int twoPower(int n)
{
    if(n==0) return 1;
    return twoPower(n-1)*2;
}

int main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   printf("%d",twoPower(n));
}
