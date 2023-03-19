#include <stdio.h>
#include <stdlib.h>

struct MyStruct{
    char s[128];
    double *p;
};


int main()
{
    struct MyStruct myStruct;
    struct MyStruct *pMyStruct = &myStruct;
    double d = 100;
    pMyStruct->p = &d;
    *(pMyStruct->p) = 500;
    printf("%lf", d);
}
