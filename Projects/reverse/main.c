#include <stdio.h>
#include <stdlib.h>

int reverse(int num)
{
    int reversed=0;
    while(num>0)
    {
        int k = num%10;
        num = num / 10;
        reversed = reversed * 10 + k;
    }
    return reversed;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    result = reverse(num);
    printf("%d",result);
}
