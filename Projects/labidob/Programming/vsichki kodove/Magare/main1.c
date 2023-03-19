#include <stdio.h>
#include <stdlib.h>
int deistviq(int x)
{
    int proiz, vremenno;
    vremenno=x;
    proiz=1;
    while (vremenno>0)
    {
        proiz=proiz*(vremenno%10) ;
        if (proiz==0) return 0;
        vremenno=vremenno/10;
    }
    if (proiz==0) return 0;
    else return (x%proiz==0);
}
int main()
{
    int a, b, result, i;
    do
    {
    printf("Vyvedi a i b: ");
    scanf("%d  %d", &a, &b);
    }while(b-a>100001);
    result=0;
    for (i=a; i<=b; i++)
    {
        if (deistviq(i)) result++;
    }
    printf("Chislata sa: %d ",result);
    return 0;
}
