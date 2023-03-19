#include <stdio.h>
#include <stdlib.h>
int str_len(char str[])
{
    int nums=0;
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i]>='0' && str[i]<='9') nums++;
    }
    return nums;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    int result = str_len(str);
    printf("%d", result);
}
