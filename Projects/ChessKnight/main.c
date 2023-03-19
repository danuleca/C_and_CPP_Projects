#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int inBoard(char arr[SIZE][SIZE], int r, int c)
{
    return r>=0 && r<SIZE && c>=0 && c<SIZE;
}
int isValidPos(char arr[SIZE][SIZE], int r, int c)
{
    return
            inBoard(arr,r-2,c-1) &&
            inBoard(arr,r-2,c+1) &&
            inBoard(arr,r+2,c-1) &&
            inBoard(arr,r+2,c+1) &&
            inBoard(arr,r+1,c-2) &&
            inBoard(arr,r+1,c+2) &&
            inBoard(arr,r-1,c-2) &&
            inBoard(arr,r-1,c+2);
}
int main()
{
    char arr[SIZE][SIZE];
    for(int r=0;r<SIZE;r++)
        for(int c=0;c<SIZE;c++)
        {
            arr[r][c] = '*';
        }
    int count=0;
    printf("%d\n",isValidPos(arr,2,3));
    for(int r=0;r<SIZE;r++)
        for(int c=0;c<SIZE;c++)
        {
            if (isValidPos(arr,r,c)){
                count++;
                arr[r][c] = 'k';
            }
        }
    for(int r=0;r<SIZE;r++)
    {
        for(int c=0;c<SIZE;c++)
        {
            printf("%2c",arr[r][c]);
        }
        printf("\n");
    }
    printf("Count = %d\n",count);
}
