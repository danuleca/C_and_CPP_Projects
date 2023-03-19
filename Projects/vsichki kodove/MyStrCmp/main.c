#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int str_cmp(char str1[], char str2[])
{
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    for(int i=0; str1[i] != '\0'; i++)
    {
        if(str1[i]>str2[i]) return 1;
        if(str2[i]>str1[i]) return -1;
    }
    if(n1>n2) return 1;
    if(n2>n1) return -1;
    return 0;
}
int main()
{
    char str1[100];
    printf("Enter first string: ");
    fgets(str1,100,stdin);
    char str2[100];
    printf("Enter second string: ");
    fgets(str2,100,stdin);
    int result = str_cmp(str1,str2);
    printf("%d",result);
}
