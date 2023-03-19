#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int find(int arr[], int num)
{
    for(int *p = arr, *end = arr + SIZE; p<end; p++)
    {
        if(*p == num) return 1;
    }
    return 0;
}

int find_recursion(int arr[],int num,int *end)
{
    if(arr[SIZE]>*end) return 0;
    if(*arr == num) return 1;
    return find_recursion(arr+1,num,end);
}

int main()
{
    int arr[256] = {1,2,3,4,5,6,7,8,9,0};
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = find(arr,num);
    if(result) printf("Found!\n");
    else printf("Not found!\n");
    result = find_recursion(arr,num,arr+SIZE);
    if(result) printf("Found!\n");
    else printf("Not found!\n");
}
