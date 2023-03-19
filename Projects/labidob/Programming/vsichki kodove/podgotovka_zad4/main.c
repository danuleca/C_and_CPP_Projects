#include <stdio.h>
#include <stdlib.h>

int n_to_1(int n)
{

    if(n==0) return 1;
    printf("%d ",n);
    n_to_1(n-1);
}

int one_to_n(int n)
{

    if(n!=0) one_to_n(n-1);
    else return 0;
    printf("%d ", n);
}

int main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   n_to_1(n);
   printf("\n");
   one_to_n(n);
}
