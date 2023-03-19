#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int find_recursion(int *from, int *to, int num)
{
    if(from == to) return 0;
    if(*from==num) return 1;
    return find_recursion(from+1,to,num);
}

// int find_recursion(int arr[], int size, int num)
// {
//     if(size == 0) return 0;
//     if(arr[size-1]==num) return 1;
//     return find_recursion(arr,size-1,num);
// }

int find_loop(int arr[], int size, int num)
{
    //for(int i=0; i<size; i++) if(num == arr[i]) return 1;
    for(int *p = arr; p < arr + size; p++) if(num == *p) return 1;
    return 0;
}

int main()
{
    int arr[SIZE];
    printf("Enter how many number you want: ");
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    int num;
    printf("Enter the number you want to search for: ");
    scanf("%d",&num);
    int result = find_loop(arr,size,num);
    printf("Find with loop result = %d\n",result);
    result = find_recursion(arr, arr + size, num);
    printf("Find with recursion result = %d\n",result);
}