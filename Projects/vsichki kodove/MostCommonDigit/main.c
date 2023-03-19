#include <stdio.h>
#include <stdlib.h>

int count_digits(long num, int digit)
{
    int count = 0;
    while(num>0)
    {
        if(num%10==digit)
        {
            count++;
        }
        num/=10;
    }
    return count;
}

int most_common(long num)
{
    int max = 0;
    int result = 0;
    while(num>0)
    {
        int digit = num%10;
        int count = count_digits(num,digit);
        if(count>max)
        {
            result = digit;
            max = count;
        }
        num/=10;
    }
    return result;
}

int main()
{
    long num;
    printf("Enter a number: ");
    scanf("%ld",&num);
    printf("%d",most_common(num));
}
