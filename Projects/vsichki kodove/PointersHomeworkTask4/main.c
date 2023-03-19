#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int sum_from_to_recursion(int *from, int *to)
{
    if (from>to) return 0;
    return *from + sum_from_to_recursion(from+1,to);
}

int sum_from_to(int *from, int *to)
{
    int sum = 0;
    for(int* p = from; p<=to; p++) sum+=*p;
    return sum;
}

int main()
{
    int arr[SIZE] = {1,2,3,4,5,13,7,8,9,10,11};
    printf("%d\n", sum_from_to(&arr[0], &arr[5]));
    printf("%d\n", sum_from_to_recursion(&arr[0], &arr[5]));
}
