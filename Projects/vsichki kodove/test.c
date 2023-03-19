#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int vrutka(char str[],char sym)
{
    int count=0;
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i]==sym) count++;
    }
    return count;
}
int most_common_sym(char str[])
{
    char result;
    int max = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        char sym = str[i];
        int temp = vrutka(str,sym);
        if(temp>max)
        {
            max = temp;
            result = sym;
        }
    }
    return result;
}

int main()
{
    char str[] = "Hello World";
    char result = most_common_sym(str);
    printf("Most common character is '%c'.\n",result);

    char str2[] = "Lorem Ipsum";
    char result2 = most_common_sym(str2);
    printf("Most common character is '%c'.",result2);
}
