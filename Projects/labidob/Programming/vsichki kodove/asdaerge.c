#include<stdio.h>
int main()
{
    int n
    scanf("%d",&n);
   if (n <= 1)
      return n;
   return main(n-1) + main(n-2);
}

