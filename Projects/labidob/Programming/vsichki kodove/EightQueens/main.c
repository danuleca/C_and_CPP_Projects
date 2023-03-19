#include <stdio.h>
#include <stdlib.h>

int board[8][8]={0};

int hasQueenInTheSameColumn(int row, int col){
    for(int r=0;r<row;r++){
        if (board[r][col]==1) return 1;
    }
    return 0;
}

int hasQueenInDiagonals(int row, int col){
    int r=row-1;
    int c=col-1;
    while(r>=0 && c>=0){
        if (board[r][c]==1) return 1;
        r--;
        c--;
    }
    r=row-1;
    c=col+1;
    while(c<8 && r>=0){
        if (board[r][c]==1) return 1;
        r--;
        c++;
    }
    return 0;
}

void printBoard(){
    for(int r=0;r<8;r++){
        for(int c=0;c<8;c++){
            printf("%2c", board[r][c]==0 ? '*' : 'q');
        }
        printf("\n");
    }
}

int count = 0;

void solution(){
    count++;
    printf("Solution %d:\n", count);
    printBoard();
    printf("\n");
}

void queens(int row){
    if (row==8){
        solution();
        return;
    }
    for(int c=0;c<8;c++){
        if (hasQueenInTheSameColumn(row,c) || hasQueenInDiagonals(row,c)) continue;
        board[row][c] = 1;
        queens(row+1);
        board[row][c] = 0;
    }
}

int main()
{
    queens(0);
    printf("Solutions count = %d\n", count);
    return 0;
}
