#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* replaceString(char *string, char *find, char *replace){
    char *p=string;
    int count = 0;
    int findLen = strlen(find);
    int replaceLen = strlen(replace);
    int stringLen = strlen(string);
    while(p = strstr(p, find)) {
        count++;
        p+=findLen;
    }
    int size = stringLen + (replaceLen-findLen)*count + 1;
    char *r = malloc(size);
    if(!r){
        fprintf(stderr, "Error malloc!\n");
        exit(1);
    }
    char *dest = r;
    char *from = string;
    while(p = strstr(from, find)) {
        int len = p - from;
        dest = strncpy(dest, from, len) + len;
        from = p + findLen;
        dest = strncpy(dest, replace, replaceLen) + replaceLen;
    }
    int len = string + stringLen - from;
    dest = strncpy(dest, from, len) + len;
    return r;
}

int main()
{
    char arr[100];
    printf("String: ");
    scanf("%[^\n]99s",arr);
    int l = strlen(arr)+1;
    char *string = malloc(l);
    if (!string){
        fprintf(stderr, "Error malloc!\n");
        return 1;
    }
    strcpy(string, arr);
    printf("Find: ");
    getchar();
    scanf("%[^\n]99s",arr);
    l = strlen(arr)+1;
    char *find = malloc(l);
    if (!find){
        fprintf(stderr, "Error malloc!\n");
        return 1;
    }
    strcpy(find, arr);
    printf("Replace: ");
    getchar();
    scanf("%[^\n]99s",arr);
    l = strlen(arr)+1;
    char *replace = malloc(l);
    if (!replace){
        fprintf(stderr, "Error malloc!\n");
        return 1;
    }
    strcpy(replace, arr);
    printf("%s\n%s\n%s\n",string,find,replace);
    char *result = replaceString(string,find,replace);
    printf("%s\n",result);
    free(result);
    free(replace);
    free(find);
    free(string);
}
