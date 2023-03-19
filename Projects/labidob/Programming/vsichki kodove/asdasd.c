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

void twoArrInOne(int arr1[], int arr2[],int n1, int n2)
{
    int n3 = n1+n2;
    int arr3[128];
    int i,j;
    for(i = 0; i < n1; i++)
  	{
      	arr3[i] = arr1[i];
  	}
 	for(i=0, j=n1; j<n3 && i<n2;i++, j++)
  	{
  		arr3[j] = arr2[i];
  	}
  	printf("Two Arrays in One: ");
  	for(int i=0; i<n3; i++)
    {
        printf("%d ",arr3[i]);
    }
}

int main()
{
    int n1,n2;
    printf("Enter how many numbers you want for the first array: ");
    scanf("%d",&n1);
    int arr1[128];
    int arr2[128];
    if(n1>128)
    {
        printf("Wrong input.");
        return 0;
    }
    for(int i=0; i<n1; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\n");
    printf("Enter how many numbers you want for the second array: ");
    scanf("%d",&n2);
    if(n2>128)
    {
        printf("Wrong input.");
        return 0;
    }
    for(int i=0; i<n2; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr2[i]);
    }
    selectionSort(arr1,n1);
    selectionSort(arr2,n2);
    twoArrInOne(arr1,arr2,n1,n2);
}
