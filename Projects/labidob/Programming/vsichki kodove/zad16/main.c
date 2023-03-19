#include <stdio.h>
#include <stdlib.h>

int sum_to_n(int n)
{
    if(n==1) return 1;
    return sum_to_n(n-1)+n;
}

int main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   printf("%d",sum_to_n(n));
}
