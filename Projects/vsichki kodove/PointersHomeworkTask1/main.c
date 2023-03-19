#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    double arr[SIZE] = {0,1,2,3,4,5,6,7,8,9};
    for(double *p = arr, *end = arr + SIZE; p<end; p++){
        printf("%lf ", *p);
    }
    printf("\n");
    for(double *p = arr, *end = arr + SIZE; p<end; p++){
        printf("%p ", p);
    }
    printf("\n");
    for(double *p = arr, *end = arr + SIZE; p<end; p+=2){
        printf("%lf ", *p);
    }
    printf("\n");
}
