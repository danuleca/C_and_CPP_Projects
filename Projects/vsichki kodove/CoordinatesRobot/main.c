#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter the moves: ");
    char c;
    int x = 0, y = 0;
    do {
        c = getchar();
        switch(c) {
            case 'L': x--; break;
            case 'R': x++; break;
            case 'U': y++; break;
            case 'D': y--; break;
        }
    }
    while(c!='\n');
    if (y<0) c='U';
    else if (y>0) c='D';
    for(int i = 0, end = abs(y); i < end; i++) printf("%c",c);
    if(x<0) c='R';
    else if (x>0) c='L';
    for(int i = 0, end = abs(x); i < end; i++) printf("%c",c);
    if(x == 0 && y == 0) printf("0");
}
