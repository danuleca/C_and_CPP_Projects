#include <stdio.h>
#include <stdlib.h>
int uravn(float a, float b, float x);
int uravn2 (void)
{
    float a,b,x;
    scanf("%f",&a);
    scanf("%f",&b);

}
int uravn(float a, float b,float x)
{
    if(a==0)
    {
       if(b==0)printf("vsqko x e reshenie");
        else printf("nikoe x ne e reshenie");
    }
    else {x=-b/a;printf("x=%f",x);}
}
void MN()
 {
 int m,n,br;
 scanf ("%d %d", &m, &n);
 br=(m-1)-n;
 printf("%d ", br);
 }
int main ()
{
float a,b,x;
int m,n,br;
int op;
printf("1. ax+b=0\n2. Broi na chislata ot M do N");
do
    {

        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("a: ");
            scanf("%f",&a);
            printf("b: ");
            scanf("%f",&b);
            uravn(a,b,x);
            break;
        case 2:
            printf("M: ");
            scanf("%d",&m);
            printf("N: ");
            scanf("%d",&n);
            MN(m,n,br);
            break;
        default:
            printf("Invalid option!\n");

        }
    }while(op!=2);
}
