#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 22, b = 7;
    float c = 22, d = 7;
    printf("1: pi = %d\n", a/b);
    printf("2: pi = %f\n", (float)(a/b));
    printf("3: pi = %f\n", c/d);
    printf("4: pi = %f\n", ((float)a)/b);
    printf("5: %f\n",a+b/c+d);
    printf("6: %f\n", (a+b)/(c+d));
    printf("7: %d\n", ++a + b++);
    printf("8: a = %d, b = %d\n", a, b);
    return 0;
}
