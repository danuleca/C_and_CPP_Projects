#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum=0;
    int count=0;
    while(1)
    {
        double num;
        scanf("%lf",&num);
        if (num==999)break;
        if (num<=0) continue;
        sum+=num;
        count++;
    }
    if (count==0){
        printf("No positive numbers found.");
        return 0;
    }
    double avr=sum/count;
    printf("Avarage = %lf",avr);
}
