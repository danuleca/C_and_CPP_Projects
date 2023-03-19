#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,num3,num4,num5,max;
    scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5);
    max = num1;
    if (max<num2) max=num2;
    if (max<num3) max=num3;
    if (max<num4) max=num4;
    if (max<num5) max=num5;
    printf("The biggest number is %f",max);
}
