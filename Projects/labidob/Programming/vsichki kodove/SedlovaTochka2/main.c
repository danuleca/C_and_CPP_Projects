#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int SIZE = 10;

int main()
{
    srand(time(NULL));
    int masiv[SIZE][SIZE];
    int n,m;
    do
    {
        printf("Enter max number of rows(from 5 to 10): ");
        scanf("%d",&n);
    }
    while(n<5 || n>10);
    do
    {
        printf("Enter max number of columns(from 5 to 10): ");
        scanf("%d",&m);
    }
    while(m<5 || m>10);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            masiv[i][j]=rand()%100;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%3d",masiv[i][j]);
        }
        printf("\n");
    }
    int rowMin[SIZE],rowMax[SIZE],columnMax[SIZE],columnMin[SIZE];
    for(int i=0; i<n; i++)
    {
    int m
    }
}
