#include <stdio.h>
#include <stdlib.h>

/*
int countNum(char str[])
{
    int nums=0;
    int inNumber = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i]>='0' && str[i]<='9') {
            if (inNumber!=0) {
                nums++;
                inNumber = 1;
            }
        }
        else inNumber = 0;
    }
    return nums;
}
*/

int countNum(char str[])
{
    int nums=0;
    if(str[0]>='0' && str[0]<='9') nums++;
    for(int i=1; str[i] != '\0'; i++)
    {
        if((str[i-1]<'0' || str[i-1]>'9') && str[i]>='0' && str[i]<='9') {
            nums++;
        }
    }
    return nums;
}

int main()
{
    char str[] = "1234abc 08";
    int result = countNum(str);
    printf("%d", result);
}
