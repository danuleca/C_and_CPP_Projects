#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int max(int a, int b)
{
    //if(a>b) return a;
    //else return b;
    return a>b ? a : b;
}
int main()
{
    int a = 2, b = 1;
    printf("%d\n",max(a++, b++));
    a = 2;
    b = 1;
    printf("%d\n",MAX(a++, b++));
    //printf("%d\n",((a++)>(b++)?(a++):(b++)));
    //printf("%d\n", a);
}
