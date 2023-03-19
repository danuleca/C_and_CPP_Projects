#include <stdio.h>
#include <stdlib.h>

int check (int n,int c)
{
    if(n==0) return 0;
    if(c==n%10) return 1;
    return check(n/10,c);
}

int main()
{
    int n,c;
    printf("Enter Num: ");
    scanf("%d",&n);
    printf("Enter C:");
    scanf("%d",&c);
    if(check(n,c)) printf("C is into Num");
    else printf("C isnt into Num");
}
