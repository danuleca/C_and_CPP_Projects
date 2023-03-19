#include <stdio.h>
#include <stdlib.h>
struct
{
    int x;
    int y;
}a;
int main()
{
    printf("Enter a && b: ");
    scanf("%d %d",&a.x,&a.y);
    struct figuri;
    if (a.x>0&&a.y>0)
        printf("point (%d, %d) lies in the First quandrant\n",a.x,a.y);
    else if (a.x < 0 && a.y > 0)
        printf("point (%d, %d) lies in the Second quandrant\n",a.x,a.y);
    else if (a.x < 0 && a.y < 0)
        printf("point (%d, %d) lies in the Third quandrant\n",a.x,a.y);
    else if (a.x > 0 && a.y < 0)
        printf("point (%d, %d) lies in the Fourth quandrant\n",a.x,a.y);
    else if (a.x == 0 && a.y == 0)
        printf("point (%d, %d) lies at the origin\n",a.x,a.y);
}
