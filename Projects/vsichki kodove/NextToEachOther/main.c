#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void moveLeft(int arr[], int size, int index, int count){
    for(int i = index, end = size - count; i < end; i++){
        arr[i] = arr[i+count];
    }
}

int removeEquals(int arr[], int size){
    int index = 0;
    for(int i = 1; i <= size; i++){
        if (i<size && arr[index]==arr[i]) continue;
        int count = i - index;
        if (count>=3){
            moveLeft(arr, size, index, count);
            return size - count;
        }
        else {
            index = i;
        }
    }
    return size;
}

int main()
{
    const int SIZE = 100;
    int size;
    printf("How many numbers: ");
    scanf("%d",&size);
    int arr[SIZE];
    if(size>SIZE)
    {
        printf("Wrong input.\n");
        return 0;
    }
    for(int i=0; i<size; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr[i]);
    }
    int count = 0;
    while(1){
        //printArray(arr,size);
        int newSize = removeEquals(arr, size);
        if (newSize == size) break;
        count += size - newSize;
        size = newSize;
    }
    printf("Total balls removed: %d\n",count);
}
