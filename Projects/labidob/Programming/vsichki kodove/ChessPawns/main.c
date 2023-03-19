#include <stdio.h>
#include <stdlib.h>

const char EMPTY = '*';
const char WHITE = 'w';
const char BLACK = 'b';

char board[8][8];

void initBoard()
{
    for(int r=0; r<8; r++)
        for(int c=0; c<8; c++)
        {
            board[r][c] = EMPTY;
        }
    for(int c=0; c<8; c++)
    {
        board[1][c]=BLACK;
        board[6][c]=WHITE;
    }
}
void printBoard()
{
    printf("%2c",' ');
    for(int c=0; c<8; c++) printf("%2d",c);
    printf("\n");
    for(int r=0; r<8; r++)
    {
        printf("%2d",r);
        for(int c=0; c<8; c++) printf("%2c",board[r][c]);
        printf("\n");
    }
}

int isValidWhiteMove(int fromRow,int fromColumn,int toRow,int toColumn){
    if(fromRow<0 || fromRow>7 || fromColumn<0 || fromColumn>7) return 0;
    if(toRow<0 || toRow>7 || toColumn<0 || toColumn>7) return 0;
    if(board[fromRow][fromColumn]!=WHITE) return 0;
    if(fromRow==6 && toRow==4 && fromColumn==toColumn && board[4][toColumn]==EMPTY && board[5][toColumn]==EMPTY) return 1;
    if(fromRow==toRow+1 && fromColumn==toColumn && board[toRow][toColumn]==EMPTY) return 1;
    if(fromRow==toRow+1 && (fromColumn==toColumn-1 || fromColumn==toColumn+1) && board[toRow][toColumn]==BLACK) return 1;
    return 0;
}

int isValidBlackMove(int fromRow,int fromColumn,int toRow,int toColumn){
    if(fromRow<0 || fromRow>7 || fromColumn<0 || fromColumn>7) return 0;
    if(toRow<0 || toRow>7 || toColumn<0 || toColumn>7) return 0;
    if(board[fromRow][fromColumn]!=BLACK) return 0;
    if(fromRow==1 && toRow==3 && fromColumn==toColumn && board[2][toColumn]==EMPTY && board[3][toColumn]==EMPTY) return 1;
    if(fromRow==toRow-1 && fromColumn==toColumn && board[toRow][toColumn]==EMPTY) return 1;
    if(fromRow==toRow-1 && (fromColumn==toColumn-1 || fromColumn==toColumn+1) && board[toRow][toColumn]==WHITE) return 1;
    return 0;
}

int hasBlackFigures()
{
    for(int r=0; r<8; r++)
    {
        for(int c=0; c<8; c++)
        {
            if (board[r][c]==BLACK) return 1;
        }
    }
    return 0;
}

int hasWhiteFigures()
{
    for(int r=0; r<8; r++)
    {
        for(int c=0; c<8; c++)
        {
            if (board[r][c]==WHITE) return 1;
        }
    }
    return 0;
}


int main()
{
    initBoard();
    printBoard();
    while(1)
    {
        int fromRow,fromColumn,toRow,toColumn;
        while(1)
        {
            printf("White moves\n");
            printf("From position (row column): ");
            scanf("%d %d",&fromRow,&fromColumn);
            printf("To position (row column): ");
            scanf("%d %d",&toRow,&toColumn);
            if (isValidWhiteMove(fromRow,fromColumn,toRow,toColumn)) break;
            printf("Invalid move. Try again... \n");
        }
        board[fromRow][fromColumn] = EMPTY;
        board[toRow][toColumn] = 'w';
        printBoard();
        if (toRow==0 || !hasWhiteFigures()) {
            printf("Game over! White wins!");
            return 0;
        }
        while(1)
        {
            printf("Black moves\n");
            printf("From position (row column): ");
            scanf("%d %d",&fromRow,&fromColumn);
            printf("To position (row column): ");
            scanf("%d %d",&toRow,&toColumn);
            if (isValidBlackMove(fromRow,fromColumn,toRow,toColumn)) break;
            printf("Invalid move. Try again... \n");

        }
        board[fromRow][fromColumn] = EMPTY;
        board[toRow][toColumn] = 'b';
        printBoard();
        if (toRow==7 || !hasBlackFigures()) {
            printf("Game over! Black wins!");
            return 0;
        }
    }
}
