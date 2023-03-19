#include <stdio.h>
void change (int *,int*);
int main(void)
{
    int a,b,x,y;
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    change(&a,&b);
    change(&x,&y);
    printf("a=%d\nb=%d",a,b);
    printf("\nx=%d\ny=%d",x,y);
    return 0;
}
void change(int *pa,int *pb)
{
    int c;
    c=*pa;
    *pa=*pb;
    *pb=c;
}
