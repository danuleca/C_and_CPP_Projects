#include <stdio.h>
void swap(int*, int*);
int main()
{
    int a[2] = {5, 6};
    int *a1, *a2;
    a1=a;
    a2=a+1;
    printf("%p, %p, %ld, %d\n", a1, a2, a1, *a1);
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
