#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/*
Is One Array a Subset of Another?

Create a function that returns true if the first array is a subset of the second. Return false otherwise.
Examples

isSubset([3, 2, 5], [5, 3, 7, 9, 2]) ➞ true

isSubset([8, 9], [7, 1, 9, 8, 4, 5, 6]) ➞ true

isSubset([1, 2], [3, 5, 9, 1]) ➞ false

Notes

Both arrays will contain only unique values.
*/

const int SIZE = 500;

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
    char str[SIZE];
    printf("Array 1? ");
    fgets(str,SIZE,stdin);
    int arr1[100];
    int n1 = strToArray(str,arr1,100);
    printf("Array 2? ");
    fgets(str,SIZE,stdin);
    int arr2[100];
    int n2 = strToArray(str,arr2,100);
    for(int i=0;i<n1;i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for(int i=0;i<n2;i++){
        printf("%d ", arr2[i]);
    }
}
