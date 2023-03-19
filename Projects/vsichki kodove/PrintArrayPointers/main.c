#include <stdio.h>
#include <stdlib.h>

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
        scanf("%d", arr + i);
    }
    printf("Array: ");
    for (int i=0; i<size; i++)
    {
        printf("%d ", *(arr + i));
        //printf("%d ", arr[i]);
    }
    printf("\n");
    //int *p = (int*)((char*)arr + 2);
    //printf("Half first half second integer %d\n", *p);
}
