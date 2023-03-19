#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    printf("String: ");
    scanf("%[^\n]99s",str);
    int l = strlen(str)+1;
    char *string = malloc(l);
    if (!string)
    {
        fprintf(stderr, "Error malloc!\n");
        return 1;
    }
    free(string);


    double num = 56.789;
    double *number = malloc(num);
    if (!number)
    {
        fprintf(stderr, "Error malloc!\n");
        return 1;
    }
    free(number);


    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int len = 10;
    char *array = malloc(len);
    if (!array)
    {
        fprintf(stderr, "Error malloc!\n");
        return 1;
    }
    free(array);
}
