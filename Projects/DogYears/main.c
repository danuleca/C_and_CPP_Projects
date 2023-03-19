#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hy,dy;
    scanf("%d",&hy);
    if(hy<=2) dy=hy*10;
    else dy=20+(hy-2)*4;
    printf("%d",dy);
}
