#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,sum=0;
    while(1)
    {
        printf("Enter number: ");
        int num;
        scanf("%d",&num);
        if (num==0) break;
        if(num<=0) count++;
        sum+=num;
    }
    printf("Sum = %d ",sum);
    printf("Count = %d",count);
}
