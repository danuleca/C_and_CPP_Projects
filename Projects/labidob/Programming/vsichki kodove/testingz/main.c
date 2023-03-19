#include <stdio.h>
#include <stdlib.h>

int sum_div(int arr[],int n)
{
    if(n<=0) return 0;
    if(arr[n-1]%8==0) return sum_div(arr, n-1) + arr[n-1];
    else return sum_div(arr, n-1);
}

int main()
{
    int arr[] = {4, 32, 0, 5, 123, 88, 43};
    int n = sizeof arr / sizeof arr[0];
    int result = sum_div(arr,n);
    printf("%d",result);
}
