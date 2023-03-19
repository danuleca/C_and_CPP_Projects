#include <stdio.h>
#include <stdlib.h>
int sum_from_to(int arr[],int n, int k, int m)
{
    if(k>=n) return -1;
    if(m>=n) m=n-1;
    int sum = 0;
    for(int i=k; i<=m; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int size;
    printf("Enter how many numbers you want: ");
    scanf("%d",&size);
    int arr[100];
    if(size>100)
    {
        printf("Wrong input.");
        return 0;
    }
    for(int i=0; i<size; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr[i]);
    }
    int k,m;
    printf("Enter index k: ");
    scanf("%d",&k);
    printf("Enter index m: ");
    scanf("%d",&m);
    int result = sum_from_to(arr,size,k,m);
    printf("%d",result);
}
