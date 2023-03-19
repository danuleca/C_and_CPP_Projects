#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

const int DELTA = 'a'-'A';

void to_lower(char *p)
{
    while(*p!=0)
    {
        if(*p>='A' &&*p<='Z') *p+=DELTA;
        p++;
    }
}

int main()
{
    const int SIZE = 100;
    char str[SIZE];
    printf("Enter first string: ");
    fgets(str,SIZE,stdin);
    char *p = strchr(str, '\n');
    if (p != NULL) *p = '\0';
    to_lower(str);
    printf("%s",str);
}
