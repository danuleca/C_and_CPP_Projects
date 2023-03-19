#include <stdio.h>
int main ()
{
int a;
scanf("%d",&a);
char ch;
do
{
    ch=getchar();
}while(ch!='\n');
printf("\na=%d",a);
return 0;
}
