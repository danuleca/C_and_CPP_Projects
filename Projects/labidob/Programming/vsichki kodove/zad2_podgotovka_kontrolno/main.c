#include <stdio.h>
#include <stdlib.h>

int indianci(int arr[],int n)
{
    int max = arr[0];
    int sum = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            sum += arr[i];
            continue;
        }
        if(arr[i]<max)
        {
            return sum;
        }
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {144, 175, 185, 150, 170};
    int n = sizeof arr / sizeof arr[0];
    int result = indianci(arr,n);
    printf("%d",result);
}
