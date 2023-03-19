#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    int n;
    printf("How many numbers?");
    scanf("%d",&n);
    int sign=1;
    for(int i=0; i<n; i++)
    {
        scanf("%f",&a);
        if(a==0) sign=0;
        if(sign==1 && a<0) sign=-1;
        if(sign==-1 && a<0) sign=1;
    }
    printf("%d",sign);
}
