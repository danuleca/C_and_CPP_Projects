#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getString(char *msg, char *str, int size){
    printf("%s",msg);
    fgets(str, size, stdin);
    char *p = strchr(str,'\n');
    if (p) *p = 0;
}

void replaceString(char *str, char *search, char *replace, char* result, int size){
    const int l1 = strlen(search);
    const int l2 = strlen(replace);
    const char *end = result+size-1;
    char *f = str, *t = result;
    char *p = strstr(f,search);
    while(p && t<end){
        int len = p-f;
        if (end-t<len) len = end-t;
        t=strncpy(t,f,len)+len;
        len = l2;
        if (end-t<len) len = end-t;
        t=strncpy(t,replace,len)+len;
        f = p + l1;
        p = strstr(f,search);
    }
    strncpy(t,f,end-t);
    result[size-1]=0;
}

int main()
{
    const int SIZE = 30;
    char str[SIZE], search[SIZE], replace[SIZE];
    getString("String: ", str, SIZE);
    getString("Search string: ", search, SIZE);
    getString("Replace string: ", replace, SIZE);
    char result[SIZE];
    replaceString(str, search, replace, result, SIZE);
    printf("Result: %s\n", result);
}

//Lorem Ipsum is simply dummy text of the printing and is simply dummy text typesetting industry
// text  -> string
//Lorem Ipsum is simply dummy string of the printing and is simply dummy string typesetting industry
