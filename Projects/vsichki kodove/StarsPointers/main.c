#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void replace_stars(char *str)
{
    while(*str!=0)
    {
        *str = '*';
        str++;
    }
}

int main()
{
    char str[SIZE];
    printf("Enter a string: ");
    scanf("%[^\n]99s",str);
    replace_stars(str);
    printf("%s",str);
}
