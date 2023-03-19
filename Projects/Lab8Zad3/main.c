#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,max,number,i=1;
    printf("First value of a: ");
    scanf("%d",&a);
    max = a;
    number = i;
    printf("Next value: ");
    while(scanf("%d",&a) != EOF)
    {
        i++;
        if (a > max)
        {
            max = a;
            number = i;
        }
        printf("i = %d, max = %d\n",i,max);
        printf("Next value:");
    }
    printf("number = %d, max = %d",number,max);
}
