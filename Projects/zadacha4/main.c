#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter how many numbers u want: ");
    scanf("%d",&n);
    int arr[100];
    for(int i=0; i<n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int index;
    printf("Enter an index: ");
    scanf("%d",&index);
    for(int j=index; j<n; j++)
    {
        printf("%d ",arr[j]);
    }
    for(int k=0; k<index; k++)
    {
        printf("%d ",arr[k]);
    }
}
