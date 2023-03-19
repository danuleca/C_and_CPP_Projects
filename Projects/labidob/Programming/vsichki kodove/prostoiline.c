#include <stdio.h>
int main ()
{
    int n,k=2;
    printf("vuvedi chislo:");
    scanf("%d",&n);
    while(n%k!=0)
    {
        k++;
    }
    {
        if(n==k)
            printf("dadenoto chislo e prosto");
        else
            printf("dadenoto chislo ne e prosto");
    }

        return 0;
}
