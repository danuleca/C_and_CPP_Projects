#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int number, guess, tries = 0;
const int max_tries = 3;
srand(time(NULL));
number = rand() % 100; //ogranichavane na stoinostite mejdu 0 i 99
do
{
printf("Otgatnete chisloto: ");
scanf("%d", &guess);
tries++;
if (guess == number)
printf("Poznahte!\n");
else if (guess > number)
printf("Chisloto e mnogo golqmo!\n");
else
printf("Chisloto e mnogo malko!\n");
printf("%d\n",tries);
}
while(guess != number && tries < max_tries);
printf("Chisloto e %d", number);
return 0;
}
