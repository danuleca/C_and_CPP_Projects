#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum;
    int temp=0;
    do
    {
        printf("Vuvedi sumata: ");
        scanf("%f",&sum);
    }
    while(sum<1 || sum>100);
    sum *= 100;
    while(sum > 0)
    {
        temp=0;
        while(sum >=100)
        {
            sum -= 100;
            temp++;
        }
        printf("%d po 100 + ",temp);
        temp=0;
        while(sum >= 20)
        {
            sum -= 20;
            temp++;
        }
        printf("%d po 20 + ",temp);
        temp=0;
        while(sum >=5)
        {
            sum -= 5;
            temp++;
        }
        printf("%d po 5 + ",temp);
        temp=0;
        while(sum >=1)
        {
            sum -= 1;
            temp++;
        }
        printf("%d po 1.",temp);
    }
}
