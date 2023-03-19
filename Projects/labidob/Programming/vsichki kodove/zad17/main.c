#include <stdio.h>
#include <stdlib.h>

int sum_elements(int arr[], int n)
{
    if (n <= 0) return 0;
    return sum_elements(arr, n-1) + arr[n-1];
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
   printf("%d",sum_elements(arr,n));
}
