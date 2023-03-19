#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 15;
    int b = 16;
    printf("%d\n",&a);
    printf("%d\n",&b);
    int *pa = &a;
    int *pb = &b;
    printf("%d\n",pa);
    printf("%d\n",pb);
    *pa = *pa + 1;
    int *c = *pa + *pb;
    printf("%d",c);
    return 0;
}
