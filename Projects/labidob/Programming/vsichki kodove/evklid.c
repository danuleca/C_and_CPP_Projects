#include <stdio.h>
int main ()
{
    int u,v,c;
    printf("Vuvedi 2 chisla: ");
    scanf("%d",&u);
    scanf("%d",&v);
    if ( u > 0 && v>0)
    {
        while (u > 0)
        {
            if ( u < v)
            {
                c=u;
                u=v;
                v=c;
            }
            u = u - v;
        }
            printf("Nai golemiq obsht delitel na dvete chila e %d",v);
    }
    else printf("Dvete chisla trqbva da sa polojitelni");
}
