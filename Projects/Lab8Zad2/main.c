#include <stdio.h>
int main()
{
    int sum=0;
    int i=0;
    printf("Input a: ");
    int a;
    while (scanf("%d", &a) != EOF)
    {
        i++;
        sum += a;
        printf(" Value of i = %d, Value of sum = %d\n", i, sum);
        printf(" Input a for next iteration: ");
    }
    printf("sum = %d\n", sum);
    return 0;
}
