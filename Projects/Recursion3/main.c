#include <stdio.h>
#include <stdlib.h>
int mul(int a, int b)
{
    if (b==1) return a;
    return a + mul(a,b-1);
}
int main()
{
  int a,b;
  printf("Enter the first number: ");
  scanf("%d",&a);
  printf("Enter the second number: ");
  scanf("%d",&b);
  int result = mul(a,b);
  printf("Result = %d",result);
}
