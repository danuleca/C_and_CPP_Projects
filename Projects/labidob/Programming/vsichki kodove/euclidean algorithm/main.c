#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u,v;
    printf("Input value for u: ");
    scanf("%d",&u);
    printf("Input value for v: ");
    scanf("%d",&v);
    if( u<=0 || v<=0)
    {
        printf("Invalid numbers!");
        return 0;
    }
    while (u>0)
    {
        if(v>u)
        {
            int n=u;
            u=v;
            v=n;
        }
        u-=v;
    }
    printf("Greatest common divisor: %d",v);
}
