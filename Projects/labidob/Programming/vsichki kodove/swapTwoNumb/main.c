#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int t;
     t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Swapped: %d %d",a,b);
}
