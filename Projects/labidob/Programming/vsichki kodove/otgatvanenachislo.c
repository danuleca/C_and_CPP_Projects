#include <stdio.h>
#include <time.h>
int main ()
{
    int num,tries,guess;
    srand(time(NULL));
    num = rand() % 100;
    tries=0;
    do
    {
        printf("Vuvedi chisloto koeto predpolagash\n");
        scanf("%d",&guess);
        tries++;
        if (guess==num)
            printf("Pozna!\n");
        else if (guess>num)
            printf("Mnogo golqmo\n");
        else if (guess<num)
            printf("Mnogo malko\n");
    }while(tries<3 && guess!=num);
    printf("Chisloto e %d",num);
}
