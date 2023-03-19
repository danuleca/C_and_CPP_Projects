#include <stdio.h>
#include <stdlib.h>
void inttobinary (int number)
{
    char BinaryFound=0;
    for (int i; i>=0; i--)
    {
        int mask = 1 << i;
        int result = number & mask;
        {
        if (result){
            printf("1");
            BinaryFound = 1;
        }
        else if(BinaryFound) printf("0");
        }
    }
}
int main ()
{
    int number;
    scanf("%d",&number);
    inttobinary(number);
}
