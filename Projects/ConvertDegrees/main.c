#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

int main()
{
    char arr[999];
    fgets(arr,999,stdin);
    char *delim = " \n";
    char *p = strtok(arr, delim);
    while(p!=NULL){
        /*
        char *end;
        int i = strtol(p,&end,10);
        if (*end){
            printf("Wrong input.\n");
            return 1;
        }
        */
        int i, parsed;
        int c = sscanf(p,"%d%n",&i,&parsed);
        if (c!=1 || p[parsed]!=0){
            printf("Wrong input.\n");
            return 1;
        }
        //int r = round(i*9/5+32);
        //printf("%d\n",r);
        double r = i*9.0/5+32;
        printf("%.0lf\n",r);
        p = strtok(NULL, delim);
    }
}
