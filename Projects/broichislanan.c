#include <stdio.h>
int main ()
{
    int n,br;
    printf("vuvedi chislo:");
    scanf("%d",&n);
    while(n>0)
    {
        br++;
        n=n/10;
    }
    printf("n ima %dcifri",br);
    return 0;
}
