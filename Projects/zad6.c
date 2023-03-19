#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;
    printf("B = %d", b);
    printf("\nA = %d", a);
}