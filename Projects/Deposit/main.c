#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d,l;
    int y;
    printf("Enter years: ");
    scanf("%d",&y);
    printf("Enter deposit: ");
    scanf("%lf",&d);
    printf("Enter deposit percentage: ");
    scanf("%lf",&l);
    double total=d;
    for(int i=1;i<=y;i++)
    {
        total+=total*l/100;
    }
    printf("Total = %lf",total);
}
