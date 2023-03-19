#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int getMinFromTo(int start,int end, int arr[])
{
    int result = INT_MAX;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<result) result = arr[i];
    }
    return result;
}
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
    int start;
    printf("Enter index start: ");
    scanf("%d",&start);
    int end;
    printf("Enter index end: ");
    scanf("%d",&end);
    int result = getMinFromTo(start,end,arr);
    printf("%d",result);
}

