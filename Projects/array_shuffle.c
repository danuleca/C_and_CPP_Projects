#include <stdio.h>
#include <stdlib.h>
void shuffle(int arr[],int index[],int size)
{
    for(int i=0; i<size; i++)
    {
        int idx = index[i];
        if (idx<0 || idx>=size) {
            printf("Invalid index \"%d\" ", idx);
            continue;
        }
        printf("%d ",arr[idx]);
    }
}
int main()
{
    int size;
    printf("Enter how many numbers you want: ");
    scanf("%d",&size);
    int arr[100];
    int index[100];
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
    printf("\n\n");
    for(int i=0; i<size; i++)
    {
        printf("Enter %d index: ",i+1);
        scanf("%d",&index[i]);
    }
    shuffle(arr,index,size);
}
