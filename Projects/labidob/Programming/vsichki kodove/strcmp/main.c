#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int mystrcmp(char *str1, char *str2)
{
    while(1)
    {
        if(*str1>*str2) return 1;
        if(*str1<*str2) return -1;
        if (*str1==0 && *str2==0) return 0;
        str1++;
        str2++;
    }
}

void getString(char *msg, char *str, int size)
{

    printf("%s",msg);
    fgets(str,size,stdin);
    char *p = strchr(str,'\n');
    if (p!=NULL) *p=0;
}

int main()
{
    char str1[SIZE];
    char str2[SIZE];
    getString("Enter the first string: ",str1,SIZE);
    getString("Enter the second string: ",str2,SIZE);
    int result = mystrcmp(str1,str2);
    printf("%d",result);
}
