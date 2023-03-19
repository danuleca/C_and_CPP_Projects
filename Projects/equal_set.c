#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int equal_set(int arr1[],int arr2[], int size ){
    qsort(arr1, size, sizeof(int), cmpfunc);
    qsort(arr2, size, sizeof(int), cmpfunc);
    for(int i = 0; i < size; i++){
        if (arr1[i]!=arr2[i]) return 0;
    }
    return 1;
}
int main()
{
    int size;
    printf("Enter how many numbers you want: ");
    scanf("%d",&size);
    int arr1[100];
    int arr2[100];
    if(size>100)
    {
        printf("Wrong input.");
        return 0;
    }
    for(int i=0; i<size; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\n\n");
    for(int i=0; i<size; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr2[i]);
    }
    int result = equal_set(arr1,arr2,size);
    printf("%d",result);
}
