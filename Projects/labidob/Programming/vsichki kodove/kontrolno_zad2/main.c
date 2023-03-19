#include <stdio.h>
#include <stdlib.h>
#define SIZE 256
int saw(int arr[], int n)
{
    for(int i=1; i<n-1; i++)
    {
        if(i%2==0)
        {

            if(arr[i]<arr[i-1] && arr[i]<arr[i+1]) continue;
            else return 0;
        }
        if(i%2==1)
        {
            if(arr[i]>arr[i-1]  && arr[i]>arr[i+1]) continue;
            else return 0;
        }
    }
    return 1;
}
int main()
{
    int arr[] = {2, 11, 0, 4, -43, 81, 5};
    int n = 7;
    if(n>SIZE) return 2;
    int result = saw(arr,n);
    printf("%d",result);
}
// && arr[i]<arr[i+1]
// && arr[i]>arr[i+1]
