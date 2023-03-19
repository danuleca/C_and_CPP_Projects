#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* yearToZodiacAnimal(int year){
    int n = year % 12;
    switch(n){
        case 0: return "Monkey";
        case 1: return "Rooster";
        case 2: return "Dog";
        case 3: return "Pig";
        case 4: return "Rat";
        case 5: return "Ox";
        case 6: return "Tiger";
        case 7: return "Hare";
        case 8: return "Dragon";
        case 9: return "Snake";
        case 10: return "Horse";
        case 11: return "Sheep";
    }
    return NULL;
}

int main()
{
    int year;
    scanf("%d",&year);
    char *animal = yearToZodiacAnimal(year);
    printf("%p %s\n", animal, animal);
}
