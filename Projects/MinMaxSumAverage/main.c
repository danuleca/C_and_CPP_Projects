#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    printf("How many elements? ");
    int elementsCount;
    scanf("%d",&elementsCount);
    float min=FLT_MAX,max=-FLT_MAX,sum=0;
    for(int i=0;i<elementsCount;i++)
    {
        int num;
        printf("Enter element %d: ",i+1);
        scanf("%d",&num);
        sum += num;
        if(num>max) max = num;
        if(num<min) min = num;
    }
    float avr = sum / elementsCount;
    printf("min=%.2f\nmax=%.2f\nsum=%.2f\navg=%.2f\n",min,max,sum,avr);
}
