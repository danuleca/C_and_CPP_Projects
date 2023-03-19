#include <stdio.h>
int main ()
{
    int number,broi,sum;
    float avr;
    broi=0;
    sum=0;
    printf("Vuvedi chislo(99 za krai)");
    scanf("%d",&number);
    while (number!=99)
    {
        if(number>0)
        {
            sum = sum + number;
            broi++;
        }
        scanf("%d",&number);
    }
    if (broi>0)
    {
        avr=(float)sum/broi;
        printf("Avr=%f",avr);
    }
    else printf("Nqma vuvedeni chisla");

}
