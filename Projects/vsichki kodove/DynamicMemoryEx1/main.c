#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    printf("String: ");
    scanf("%[^\n]99s",str);
    int l = strlen(str) + 1;
    char *string = malloc(l * sizeof(char));
    if (!string)
    {
        fprintf(stderr, "Error malloc!\n");
        return 1;
    }
    strcpy(string,str);
    free(string);


    double num = 56.789;
    double *number = malloc(1 * sizeof(double));
    if (!number)
    {
        fprintf(stderr, "Error malloc!\n");
        return 1;
    }
    *number = num;
    free(number);

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //printf("%lud\n",sizeof(arr));
    int *array = malloc(sizeof(arr));
    if (!array)
    {
        fprintf(stderr, "Error malloc!\n");
        return 1;
    }
    //for(int i = 0; i<10; i++) array[i] = arr[i];
    memcpy(array,arr,sizeof(arr));
    for(int i = 0; i<10; i++) {
        printf("%d ", array[i]);
    }
    free(array);
}
