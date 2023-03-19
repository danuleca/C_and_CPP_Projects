#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
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
    int max = INT_MIN;
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
    printf("Most common character is '%c'.",result);

}
