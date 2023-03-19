#include <stdio.h>
#include <stdlib.h>

int prqsno_zele(int n, int arr[])
{
   for(int j=0; j<n-1; j++)
    {
            if(arr[j]>arr[j+1])
            return 0;
    } 
}
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
    int result;
    result = prqsno_zele(n,arr);
    printf("%d",result);
}