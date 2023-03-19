#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RNG();

int main()
{
    srand(time(0));
    int inputs=0;
    char months[12][4] =
    {
        "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"
    };

    while(1)
    {
        int km;
        do
        {
            printf("Enter value for kilometers: ");
            scanf("%d", &km);
            if(km < 0 || km > 1000)
            {
                printf("Invalid input!\n");
            }
            else break;
        }
        while(1);
        if(km == 0)
        {
            printf("End!\n");
            break;
        }

        inputs++;

        float price;
        if(km <= 100)
        {
            price = km * 0.29f;
            //km -= km;
        }
        else if(km > 100 && km < 200)
        {
            price = 29;
            km -= 100;
            price += km * 0.39;
            //km -= km;
        }
        else if(km > 200)
        {
            price = 29;
            km -= 100;
            price += 39;
            km -= 100;
            price += km * 0.49;
        }

        int random = RNG();

        if(inputs == 3)
        {
            price -= 0.10f * price;
            inputs = 0;
        }
        printf("Order can be done in %s for %.2f leva\n", months[random], price);
    }
}


int RNG()
{
    int num = rand() % 12;
    return num;
}
