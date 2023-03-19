#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int max_odd(int arr[],int size)
{
    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > max && arr[i]%2==1) max = arr[i];
    }
    return max;
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
    int result = max_odd(arr,size);
    printf("Max = %d",result);
}
