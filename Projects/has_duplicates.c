#include <stdio.h>
#include <stdlib.h>
int has_duplicates(int arr[], int size)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j]) return 1;
        }
    }
    return 0;
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
}
