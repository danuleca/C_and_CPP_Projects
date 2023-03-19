#include <stdio.h>
#include <stdlib.h>
int find(int arr[],int size,int num)
{
    for(int i=0; i<size; i++)
        if(arr[i]==num) return i;
    return -1;
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
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int result = find(arr,size,num);
    printf("%d",result);
}
