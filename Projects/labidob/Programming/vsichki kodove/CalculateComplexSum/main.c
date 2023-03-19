#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
        printf("Enter N [2 .. 10]: ");
        scanf("%d",&n);
    }
    while(n<2 || n>10);
    double x;
    do
    {
        printf("Enter X [0.5 .. 100]: ");
        scanf("%lf",&x);
    }
    while(x<0.5 || x>100.00);

    double member=1;
    double sum = 1;
    for(int i=1; i<=n; i++)
    {
        member *= i/x;
        sum += member;
    }

    printf("Sum = %.5lf",sum);
}
