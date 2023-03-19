#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
Sum of Minimums
Create a function that takes a 2D array arr returns the sum of the minimum value in each row.

Examples
sumMinimums([
  [1, 2, 3, 4, 5],
  [5, 6, 7, 8, 9],
  [20, 21, 34, 56, 100]
] ➞ 26

// minimum value of the first row is 1
// minimum value of the second row is 5
// minimum value of the third row is 20
*/


#define MAX_ROWS 30
#define MAX_COLUMNS 30

int sumMinimums(int arr[][MAX_COLUMNS],int m, int n)
{
    int min=INT_MAX,sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]<min) min = arr[i][j];
        }
        sum+=min;
        min=INT_MAX;
    }
    return sum;
}

int main()
{
    int arr[MAX_ROWS][MAX_COLUMNS];
    int n,m;
    do
    {
        printf("How many rows? ");
        scanf("%d",&n);
    }
    while(n>MAX_ROWS || n<1);
    do
    {
        printf("How many columns? ");
        scanf("%d",&m);
    }
    while(m>MAX_COLUMNS || m<1);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("Array[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int result = sumMinimums(arr,m,n);
    printf("Result = %d",result);
}
