#include <stdio.h>
#include <stdlib.h>

int count_of_nums(int num)
{
    int count=0;
    while(num>0)
    {
        num/=10;
        count++;
    }
    return count;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int result = count_of_nums(num);
    printf("Count = %d",result);
}
