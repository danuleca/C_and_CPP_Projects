#include <stdio.h>
#include <stdlib.h>

void zad4(int n)
{
    for(int i=0; i<n; i++)
        printf("* ");
    printf("\n");
    for(int i=0; i<n-2; i++)
    {
        printf("*");
        for(int i=0; i<n+2; i++)
            printf(" ");
        printf("*\n");
    }
    for(int i=0; i<n; i++)
        printf("* ");
    printf("\n\n\n\n");
}
void zad3(int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\n");
        for(int j=0; j<i+1; j++)
        {
            printf("*");
        }
    }
    printf("\n\n\n\n\n");
}

void zad2(int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\n");
        for(int j=0; j<n; j++)
        {
            printf("*");
        }
    }
    printf("\n\n\n\n\n");
}

void zad1(int n)
{
    for(int i=0; i<n; i++)
        printf("*");
    printf("\n\n\n\n\n\n");
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n<0)
    {
        scanf("%d",&n);
    }
    zad1(n);
    zad2(n);
    zad3(n);
    zad4(n);
}
