#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SIZE = 10;

int getInt(char *msg, int from, int to){
    int n;
    do
    {
        printf("%s",msg);
        scanf("%d",&n);
    }
    while(n<from||n>to);
    return n;
}

void printArray(int arr[][SIZE], int rows, int columns){
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}

void minMaxForRow(int arr[][SIZE], int rowCount, int columnCount, int row, int *min, int *max){
    *min = arr[row][0];
    *max = arr[row][0];
    for (int i = 1; i < columnCount; i++){
        int c = arr[row][i];
        if (c<*min) *min=c;
        if (c>*max) *max=c;
    }
}

void minMaxForColumn(int arr[][SIZE], int rowCount, int columnCount, int column, int *min, int *max){
    *min = arr[0][column];
    *max = arr[0][column];
    for (int i = 1; i < rowCount; i++){
        int c = arr[i][column];
        if (c<*min) *min=c;
        if (c>*max) *max=c;
    }
}

void makeInflectionPoint(int arr[][SIZE], int rowCount, int columnCount, int row, int column){
    int value = arr[row][column];
    for(int i=0;i<rowCount;i++) arr[i][column]=value+1;
    for(int i=0;i<columnCount;i++) arr[row][i]=value-1;
    arr[row][column]=value;
}

int main()
{
    srand(time(NULL));
    int masiv[SIZE][SIZE];
    int n = getInt("Enter max number of rows (ot 5 do 10): ",5,10);
    int m = getInt("Enter max number of columns (ot 5 do 10): ",5,10);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            masiv[i][j]=rand()%100;
        }
    }
    //makeInflectionPoint(masiv,n,m,2,3);

    printf("\n");
    printArray(masiv,n,m);

    int rowMin[SIZE], rowMax[SIZE], columnMin[SIZE], columnMax[SIZE];
    for (int i=0; i<n; i++){
        minMaxForRow(masiv,n,m,i,&rowMin[i],&rowMax[i]);
    }
    for (int i=0; i<m; i++){
        minMaxForColumn(masiv,n,m,i,&columnMin[i],&columnMax[i]);
    }

    printf("\n");
    int found = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int c = masiv[i][j];
            if ((c==rowMin[i] && c==columnMax[j]) || (c==rowMax[i] && c==columnMin[j])){
                printf("row = %d, column = %d\n",i,j);
                found = 1;
            }
        }
    }
    if (!found){
        printf("No inflection point.\n");
    }
}
