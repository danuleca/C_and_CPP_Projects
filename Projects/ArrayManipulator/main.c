#include <stdio.h>
#include <stdlib.h>

int strToArray(char *str, int arr[], int n)
{
    int i = 0;
    char *tokens = " ,\n";
    char *pch = strtok(str,tokens);
    while (pch != NULL)
    {
        arr[i++] = strtol(pch, NULL, 10);
        if (i==0 && errno!=0){
            printf("Invalid char.\n");
            exit(1);
        }
        if (i>n) {
            printf("Array size not enough.\n");
            exit(1);
        }
        pch = strtok(NULL, tokens);
    }
    return i;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
