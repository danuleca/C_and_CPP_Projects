#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
        printf("Enter a number 1 <= X <= 1500: ");
        scanf("%d",&n);
    }while(n<1 && n>1500);
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 || i%7==0) continue;
        printf("%d ",i);
    }
}
