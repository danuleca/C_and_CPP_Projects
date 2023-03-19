#include <stdio.h>
int main()
{
    int n,k=1,br=0;
    printf("vuvedi chislo:");
    scanf("%d",&n);
    while(k<=n)
    {
        if(n%k==0)
        {
            printf("N se deli na %d\n",k);
            br++;
        }
        k++;
    }
    printf("broqt na delitelite %d",br);
    return 0;
}
