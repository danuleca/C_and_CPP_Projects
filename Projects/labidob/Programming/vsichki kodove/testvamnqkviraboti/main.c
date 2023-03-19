#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    int lev=0,br20=0,br5=0,br1=0;
    do
    {
        printf("Enter the sum:");
        scanf("%f", &n);
    }
    while(n<0 || n>100);
    while(n>0)
    {
        if(n-1.00 > 0.99)
        {
            lev++;
            continue;
        }
        if(n-0.20 > 0.19)
        {
            br20 ++;
            continue;
        }
        if(n-0.05 > 0.04)
        {
            br5++;
            continue;
        }
        n=n-0.01;
        br1 ++;
    }
    printf("%d po 1lv, %d po 20st, %d po 5st, %d po 1st\n", lev,br20,br5,br1);

}
