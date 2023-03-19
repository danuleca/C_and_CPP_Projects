#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter how many numbers you want: ");
    scanf("%d",&n);
    int arr[100];
    if(n>100)
    {
        printf("Wrong input.");
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr[i]);
    }
    int k,m;
    printf("Enter index k: ");
    scanf("%d",&k);
    printf("Enter index m: ");
    scanf("%d",&m);
    int c = arr[k];
    arr[k] = arr[m];
    arr[m] = c;
    for(int i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
}
