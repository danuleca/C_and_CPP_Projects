#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const int SIZE = 50;
    char str[SIZE];
    fgets(str, SIZE, stdin);
    char *p = strchr(str,'\n');
    if (p) *p='\0';
    if (!strcmp(str,"false") || !strcmp(str,"False")) {
        printf("true\n");
        return 0;
    }
    if (!strcmp(str,"true") || !strcmp(str,"True")) {
        printf("false\n");
        return 0;
    }
    int parsed;
    double num;
    int r = sscanf(str, "%lf%n", &num, &parsed);
    int len = strlen(str);
    if (r==1 && len == parsed){
        printf("%lf\n",num+1);
        return 0;
    }
    char *strAppend = "*";
    if (len + strlen(strAppend) + 1 > SIZE) {
        printf("Buffer too small.\n");
        return 1;
    }
    strcat(str,strAppend);
    printf("%s\n",str);
}
