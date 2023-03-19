#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int getMinFromTo(int start,int end, int *arr)
{
    int min_index = start;
    int result = INT_MAX;
    for(int i=start; i<end; i++)
    {
        if(arr[i]<result)
        {
            result = arr[i];
            min_index = i;
        }
    }
    return min_index;
}
void swapTwo(int *arr, int k, int m)
{
    int temp;
    temp = arr[k];
    arr[k] = arr[m];
    arr[m] = temp;
}
void selectionSort(int *arr,int n)
{
    for(int i=0; i<n; i++)
    {
        int min_index = getMinFromTo(i,n,arr);
        swapTwo(arr,i,min_index);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
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
    selectionSort(arr,n);
}
