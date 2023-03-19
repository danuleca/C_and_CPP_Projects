#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter how many numbers you want: ");
    scanf("%d",&n);
    int arr[100];
    if(n>100)
    {
        printf("Wrong input.");
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(i=0) continue;
        else if(arr[i]<arr[i-1]) return 0;
        }
    return 1;
}
