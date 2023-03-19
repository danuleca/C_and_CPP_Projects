#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int starts_with(char str1[], char str2[])
{
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    int n;
    if(n1<n2) n=n1;
    else if(n2<n1) n=n2;
    for(int i=0;i<n;i++)
    {
        if(str1[i]!=str2[i]) return 0;
    }
    return 1;
}
int main()
{
    char str1[100];
    printf("Enter first string: ");
    fgets(str1,100,stdin);
    char str2[100];
    printf("Enter second string: ");
    fgets(str2,100,stdin);
    int result = starts_with(str1,str2);
    printf("%d",result);
}
