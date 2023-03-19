#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void to_lower(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90) str[i]=str[i]+32;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
}

int main()
{
    char str[100];
    printf("Enter first string: ");
    fgets(str,100,stdin);
    char *p = strchr(str, '\n');
    if (p != NULL) *p = '\0';
    to_lower(str);
}
