#include <stdio.h>
int main ()
{
    int sum,num;
    sum=0;
    scanf("%d",&num);
    while (num!=99)
    {
        sum = num + sum;
        scanf("%d",&num);
    }
    printf("Sumata = %d",sum);
    return 0;
}
