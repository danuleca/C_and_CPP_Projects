#include <stdio.h>
#include <stdlib.h>

int kiselo_zele(int num)
{
    if(num==0) return 0;
    while(num!=1)
    {
        if(num % 2 != 0) return 0;
        num/=2;
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(kiselo_zele(num)==1) printf("%d is a power of 2",num);
    else printf("%d is not a power of 2",num);
}
