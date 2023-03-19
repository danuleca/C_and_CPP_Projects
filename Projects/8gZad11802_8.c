#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],i,n,large,small;
    printf("Broi na elementite: ");
    scanf("%d",&n);
    printf("\nVuvedi masiva : ");
    for(i=0; i<n; ++i)
    {
        scanf("%d",&a[i]);
    }
    large=small=a[0];
    for(i=1; i<n; ++i)
    {
        if(a[i]>large)
            large=a[i];

        if(a[i]<small)
            small=a[i];
    }

    printf("\nNai-maluk element = %d\n",small);
    printf("\nNai golqm element = %d\n",large);

    return 0;
}
