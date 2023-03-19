#include <stdio.h>
//ax+b=0
int uravn(float a, float b, float *px);
int main (void)
{
    float a,b,x;
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    switch (uravn(a,b,&x))
    {
        case 1: printf("vsqko x e reshenie");break;
        case 2: printf("nikoe x ne e reshenie");break;
        case 3: printf("x=%f",x);break;
    }
    return 0;
}
int uravn(float a, float b,float *px )
{
    if(a==0)
    {
       if(b==0)return 1;
        else return 2;
    }
    else {*px=-b/a;return 3;}
}
