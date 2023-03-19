#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    signed char arr1[] = {1,2,3,4,5,6,7};
    signed char arr2[] = {1,2,3,4,5,6,-3};
    int result = memcmp(arr1,arr2,7);
    printf("%d",result);
}
