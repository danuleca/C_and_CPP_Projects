#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Who's in First Place?

Create a function that takes a string road and returns the car that's in first place.
The road will be made of "=", and cars will be represented by letters in the alphabet.
Examples

firstPlace("====b===O===e===U=A==") ➞ "A"

firstPlace("e==B=Fe") ➞ "e"

firstPlace("proeNeoOJGnfl") ➞ "l"

Notes

Return "0" if there is no car on the road and "0" if there is no road.
*/
int firstPlace(char road[])
{
    char *p = road;
    char car = '0';
    while(*p!=0)
    {
        if (*p!='=') car = *p;
        p++;
    }
    return car;
}
int main()
{
    char road[100];
    printf("Enter the road: ");
    fgets(road,100,stdin);
    char *p = strchr(road,'\n');
    if (p) *p=0;
    /*
    int len = strlen(road);
    for(int i=len-1; i>=0; i--)
    {
        char temp = road[i];
        if(temp!='=') {
            car = temp;
            break;
        }
    }
    */
    char car = firstPlace(road);
    printf("Car: '%c'\n",car);
}
