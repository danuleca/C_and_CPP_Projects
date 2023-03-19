#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,sum=0;
    while(1)
    {
        int num;
        printf("Enter number(0=break): ");
        scanf("%d",&num);
        if(num==0)break;
        if(num<0) count++;
        int sum;
        if(num%5==0) sum+=num;
    }
    printf("Count = %d, Sum = %d",count,sum);
}
