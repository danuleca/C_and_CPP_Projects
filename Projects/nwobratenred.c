#include <stdio.h>
int main ()
{
    int n,m=0;
    printf("vuvedi n: ");
    scanf("%d",&n);
    while (n>0)
    {
        m=m*10+n%10;
        n=n/10;
    }
    printf("N v obraten red: %d",m);
    return 0;

}
