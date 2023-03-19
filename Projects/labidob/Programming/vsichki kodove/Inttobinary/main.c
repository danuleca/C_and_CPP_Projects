#include <stdio.h>
#include <stdlib.h>

void printBinary(int number)
{
    char bitFound = 0;
    for(int i = 31; i>=0; i--)
    {
        int mask = 1 << i;
        int result = number & mask;
        if (result)
        {
            printf("1");
            bitFound = 1;
        }
        else if (bitFound) printf("0");
    }
}
int main()
{
    int number;
    scanf("%d",&number);
    printBinary(number);
}
