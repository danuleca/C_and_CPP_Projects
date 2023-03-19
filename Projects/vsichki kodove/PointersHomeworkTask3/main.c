#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void swap(int *arr, int first, int second)
{
    int *p1 = &arr[first];
    int *p2 = &arr[second];
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int arr[SIZE];
    printf("Enter how many number you want: ");
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Which indexes you want to swap: ");
    int first, second;
    scanf("%d %d",&first, &second);
    swap(arr,first,second);
    printf("Swapped string: ");
    for(int i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
}
