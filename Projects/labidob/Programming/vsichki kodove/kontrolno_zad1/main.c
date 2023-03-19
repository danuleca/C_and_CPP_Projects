#include <stdio.h>
#include <stdlib.h>
int mid(int num1, int num2, int num3)
{
    if ((num1 < num2 && num2 < num3) || (num3 < num2 && num2 < num1)) return num2;
    else if ((num2 < num1 && num1 < num3) || (num3 < num1 && num1 < num2)) return num1;
    else return num3;
}
int main()
{
    int result = mid(3,91,18);
    printf("%d",result);
}
