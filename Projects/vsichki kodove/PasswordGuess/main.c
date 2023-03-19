#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validateKey(char *key){
    return strcmp(key,"ghdjkt")==0;
}

// abcd -> abce/bbcd -> abcf/cbcd
// zabc -> abbc

int nextKey(char *key, int size){
    int overflow = 1;
    for(int i = 0; overflow && i<size; i++){
        if (key[i]==0) key[i]='a';
        else key[i]++;
        overflow = key[i]>'z';
        if (overflow) key[i]='a';
    }
    return overflow;
}

#define SIZE 9

int main()
{
    char key[SIZE+1] = {0};
    while(!nextKey(key,SIZE)){
        if (validateKey(key)) break;
    }
    printf("Key: %s\n", key);
    return 0;
}
