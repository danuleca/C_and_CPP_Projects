#include <stdio.h>
#include <stdlib.h>

void func()
{
    int max=0;
    int count=0;
    int sum=0;
    while(1)
    {
        int n;
        printf("Napishi chislo(za spirane na cukala napishi 0): ");
        scanf("%d",&n);
        if(n==0) break;
        if(max<n) max=n;
        if(n%2==0) count++;
        sum+=n;
    }
    printf("Max = %d, Count = %d, Sum = %d\n",max,count,sum);
}

int main()
{
    func();
}
