#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    int sum=0;
    while(1)
    {
        printf("Enter value: ");
        int num;
        scanf("%d",&num);
        if(num==0) break;
        if(num < -5 || num > 20)
        {
            printf("This number is not going to be used!\n");
            continue;
        }
        count++;
        sum+=num;
    }
    if(count==0)
    {
        printf("Error!");
        return 0;
    }
    float avr = (float)sum/count;
    printf("Avr = %f",avr);
}
