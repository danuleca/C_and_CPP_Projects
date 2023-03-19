#include <stdio.h>
#include <stdlib.h>

int getNum(){
    int n;
    printf("Please enter a number (to end enter 999): ");
    scanf("%d",&n);
    return n;
}

int main()
{
    int sum=0;
    int n = getNum();
    while (n!=999)
    {
        sum+=n;
        n=getNum();
    }
    printf("Sum=%d",sum);
}
