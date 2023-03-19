#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

void to_lower(char *s, char *lower)
{
    int diff = 'a'-'A';
    while(*s!=0)
    {
        if(*s>='A' && *s<='Z')
        {
            *lower = *s + diff;
        }
        else{
            *lower = *s;
        }
        s++;
        lower++;
    }
}

int main()
{
    char s[SIZE];
    char lower[SIZE];
    printf("Enter a string: ");
    scanf("%[^\n]255s",s);
    to_lower(s,lower);
    printf("%s",lower);
}
