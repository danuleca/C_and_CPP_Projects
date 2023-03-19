#include <stdio.h>
#include <stdlib.h>

int count_digits(int n)
{
    if(n==0) return 0;
    return count_digits(n/10)+1;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Number of digits = %d", count_digits(num));
}
