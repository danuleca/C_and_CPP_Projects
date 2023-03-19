#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 100;

int getArray(char *msg, double array[]){
    printf("%s ", msg);
    int size;
    scanf("%d", &size);
    if (size > MAX_SIZE || size < 0){
        fprintf(stderr, "Too many or negative count of values\n");
        exit(1);
    }
    for(int i=0; i<size; i++)
    {
        printf("Enter value %d: ",i);
        scanf("%lf",&array[i]);
    }
    return size;
}

int main()
{
    double income[MAX_SIZE], expense[MAX_SIZE];
    int incomeSize = getArray("How many income values?", income);
    int expenseSize = getArray("How many expense values?", expense);
    double sum=0;
    for(int i=0; i<incomeSize; i++) sum += income[i];
    for(int i=0; i<expenseSize; i++) sum -= expense[i];
    printf("Total = %.2lf",sum);
    return 0;
}
