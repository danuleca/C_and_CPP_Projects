#include <stdio.h>
int main()
{
    //Да се определи тек. дължина на низ без използване на strlen
    char s[11];
    char *p;
    printf("Zad 1. Enter string: ");
    fgets(s,10,stdin);
    p=strchr(s,'\n');
    if(p)*p='\0';
    int i;
    for (i = 0; s[i]!='\0'; ++i);
    printf("Length of the string: %d\n",i);
    //Да се определи дали даден низ е палиндром
    {
        char s[11];
        int i,n,c=0;
        printf("Zad 2. Enter  the string : ");
        fgets(s,10,stdin);
        p=strchr(s,'\n');
        if(p)*p='\0';
        for (n = 0; s[n]!='\0'; ++n);
        for(i=0; i<n/2; i++)
        {
            if(s[i]==s[n-i-1])
                c++;

        }
        if(c==i)
            printf("String is palindrom");
        else
            printf("String is not palindrom");



        return 0;
    }
}
