#include <stdio.h>
#include <stdlib.h>
int str_len(char str[])
{
    int i;
    for(i=0; str[i]!='\n'; ++i);
        return i;
}
int main()
{
    char str[100];
    printf("Enter a string: \n");
    fgets(str,100,stdin);
    int result = str_len(str);
    printf("Length of input string: %d",result);
}
