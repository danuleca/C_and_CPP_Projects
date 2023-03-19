#include <stdio.h>
#include <stdlib.h>

int sum_to_n(int arr[],int size)
{
    if(size==0) return 1;
    return sum_to_n(size-1,size)*(arr[size-1]);
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
    printf("%d",sum_to_n(arr,size));
}
