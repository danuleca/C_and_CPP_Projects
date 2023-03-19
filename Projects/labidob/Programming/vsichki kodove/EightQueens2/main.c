#include <stdio.h>
#include <stdlib.h>

int board[8][8];

int isThereAQueenInTheSameColumn(int row, int column)
{
    for(int r=0;r<row;r++)
    {
        if (board[r][column]==1) return 1;
    }
    return 0;
}

int printBoard()
{
    for(int r=0;r<8;r++){
        for(int c=0;c<8;c++) {
            printf("%c", board[r][c]==0 ? '*' : 'Q');
        }
        printf("\n")
    }
}

void queens(int row)
{
    if(row==8)
    {
        solution();
        return;
    }
    for(int c=0;c<8;c++)
    {
        if(isThereAQueenInTheSameColumn(row,c) || isThereAQueenInDiagonals(row,column)) continue;
        board[row][c] = 1;
        queens(row+1);
        board[row][c] = 0;
    }

}
int main()
{
    queens(0);
    printf("Solutions = %d \n",count);
    return 0;
}
