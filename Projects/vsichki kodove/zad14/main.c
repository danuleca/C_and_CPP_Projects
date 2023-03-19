#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int starts_with(char str1[], char str2[])
{
    int len = strlen(str2);
    for(int i=0; i<len; i++)
        if(str1[i]!=str2[i]) return 0;
    return 1;
}
int main()
{
    char str1[100];
    printf("Enter first string: ");
    fgets(str1,100,stdin);
    char *p = strchr(str1, '\n');
    if (p != NULL) *p = '\0';

    char str2[100];
    printf("Enter second string: ");
    fgets(str2,100,stdin);
    char *p2 = strchr(str2, '\n');
    if (p2 != NULL) *p2 = '\0';

    int result = starts_with(str1,str2);
    printf("%d",result);
}
