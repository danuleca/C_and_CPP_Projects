#include <stdio.h>

void getLine(char *str, int size)
{
    fgets(str,size,stdin);
    char *p=strchr(str,'\n');
    if(p)*p='\0';
}

int isIdentifier(char string[])
{
    int len = strlen(string);
    if (len<1) return 0;
    if ((string[0]<'a' || string[0]>'z') && (string[0]<'A' || string[0]>'Z') && string[0]!='_') return 0;
    for(int i=1; i<len; i++)
    {
        if((string[i]<'a' || string[i]>'z') && (string[i]<'A' || string[i]>'Z')
                && string[i]!='_' && (string[i]<'0' || string[i]>'9'))
        {
            return 0;
        }
    }
    return 1;
}

int removeSpaces(char *str)
{
    int d=0,c=0;
    while (str[c] != '\0')
    {
        if (str[c] != ' ')
        {
            str[d] = str[c];
            d++;
        }
        c++;
    }
    str[d] = '\0';
}

int main()
{
    const int SIZE = 50;
    // problem 1
    {
        char string[SIZE];
        printf("Zad 1. Enter any string: \n");
        getLine(string,SIZE);
        if(!isIdentifier(string)) printf("%s is not valid identifier\n",string);
        else printf("%s is valid identifier\n",string);
    }
    //problem 2
    {
        char spaces[SIZE];
        int c = 0, d = 0;
        printf("Zad 2. Enter any string: \n");
        getLine(spaces, SIZE);
        removeSpaces(spaces);
        printf("Text after removing spaces\n%s\n", spaces);
    }
}
