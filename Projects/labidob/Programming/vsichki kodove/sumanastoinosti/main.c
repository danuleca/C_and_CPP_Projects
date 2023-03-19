#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum=0,step=0;
    do
    {
        printf("Vuvedi a: ");
        scanf("%d",&a);
        printf("Vuvedi b: ");
        scanf("%d",&b);
    }
    while(b<a || a<-100 || b> 100);

    for(int i=a; i<=b; i++)
    {
        step=i*i*i;
        if(i%2==0) sum += abs(step);
    }
    printf("%d",sum);
}
