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
}
int equal_set(int arr[],int arr2[], int n1, int n2)
{
    if(n1!=n2) return 0;
    for(int i=0; i<n1; i++)
    {
        if(arr[i]!=arr2[i]) return 0;
    }
    return 1;
}
int main()
{
    int n1,n2;
    printf("Enter how many numbers you want for the first array: ");
    scanf("%d",&n1);
    int arr[100];
    int arr2[100];
    if(n1>100)
    {
        printf("Wrong input.");
        return 0;
    }
    for(int i=0; i<n1; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    printf("Enter how many numbers you want for the first array: ");
    scanf("%d",&n2);
    if(n2>100)
    {
        printf("Wrong input.");
        return 0;
    }
    for(int i=0; i<n2; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr2[i]);
    }
    selectionSort(arr,n1);
    selectionSort(arr2,n2);
    int result = equal_set(arr,arr2,n1,n2);
    printf("%d",result);
}
