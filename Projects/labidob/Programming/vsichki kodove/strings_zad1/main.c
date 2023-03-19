#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert_to_hex(int num)
{
    char *str = calloc(100, sizeof(char));
    sprintf(str, "%x", num);
    return str;
}

int letter_count( const char *str, char letter )
{
    int count = 0;
    for(const char *p = str; (p=strchr(p,letter))!=NULL; p++) count++;
    return count;
}
void combine(char *strings[], int strings_count)
{
    int len = 0;
    for(int i=0; i<strings_count; i++)
    {
        len += strlen(strings[i]);
    }
    char *result = calloc(len+1,1);
    for(int i=0; i<strings_count; i++)
    {
        strcat(result,strings[i]);
    }
    printf("Concatenated String: %s\n", result);
}
int main()
{
    char word[] ="kiselo zele";
    char letter  = 'e';
    char *strings[] = {"one", "two", "three"};
    int result = letter_count(word,letter);
    printf("Result = %d\n", result);
    combine(strings,3);
    char *result3 = convert_to_hex(23);
    printf("%s",result3);

}
