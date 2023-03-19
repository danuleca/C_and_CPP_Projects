#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* digitToStr(int n, char* result, int len)
{
    //char str[] = "twelve";
    //printf("%p\n",str);

    /*
    char *str = "twelve";
    *str = 'p';
    printf("%s\n",str);
    */


    switch(n)
    {
    case 0: return "Zero";
    case 1: return "One";
    case 2: return "Two";
    case 3: return "Three";
    case 4: return "Four";
    default: return NULL;
    }


    // if (strlen("Zero")+><len) ...Error

    /*
    switch(n)
    {
    case 0: strcpy(result,"Zero"); break;
    case 1: strcpy(result,"One"); break;
    case 2: strcpy(result,"Two"); break;
    case 3: strcpy(result,"Three"); break;
    case 4: strcpy(result,"Four"); break;
    default: return 0;
    }
    return 1;
    */
}

int main()
{
    int n;
    printf("Enter a digit: ");
    //scanf("%d",&n);
    //char *result = digitToStr(n);
    char result[10];
    if (scanf("%d",&n)!=1 || !digitToStr(n, result, 10)){
        printf("Error\n");
        return 0;
    }
    printf("%p %s\n",result,result);
}
