#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
YouTube Upload Count

You are given an array of dates in the format Dec 11 and a month in the format Dec as arguments.
Each date represents a video that was uploaded on that day. Return the number of uploads for a given month.
Examples

uploadCount(["Sept 22", "Sept 21", "Oct 15"], "Sept") ➞ 2

uploadCount(["Sept 22", "Sept 21", "Oct 15"], "Oct") ➞ 1

Notes

If you only pay attention to the month and ignore the day, the challenge will become easier.

*/


int main()
{
    char month[10];
    printf("Enter the month: ");
    scanf("%s",month);
    getchar();
    int len = strlen(month);
    char date[15];
    int count=0;
    while(1)
    {
        printf("Enter a date: ");
        fgets(date,15,stdin);
        char *p = strchr(date,'\n');
        if (p) *p = 0;
        if (strcmp(date,"")==0) break;
        if (strncmp(date,month,len)==0) count++;
    }
    printf("Upload count = %d",count);
}
