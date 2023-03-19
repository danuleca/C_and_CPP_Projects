#include <stdio.h>
#include <stdlib.h>
void moveEvenFirst(int arr[], int size){
    int *p = arr, *q=&arr[size-1];
    while(1){
        while(*p % 2 == 0 && p<q) p++;
        while(*q % 2 == 1 && p<q) q--;
        if (p>=q) break;
        int temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
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
    moveEvenFirst(arr,size);
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}
