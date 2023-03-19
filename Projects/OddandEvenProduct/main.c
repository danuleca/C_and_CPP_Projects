#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num;
    printf("Enter N: ");
    scanf("%d",&n);
    int evenProd = 1, oddProd = 1;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(i%2==1) oddProd*=num;
        else evenProd*=num;
    }
    if (oddProd==evenProd) printf("yes %d\n",oddProd);
    else printf("no %d %d\n",oddProd,evenProd);

}
