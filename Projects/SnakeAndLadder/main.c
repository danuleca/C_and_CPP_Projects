#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Zar()
{
    return rand() % 6 + 1;
}

int main()
{
    srand(time(NULL));
    int flag = 0;
    int count = 0;
    int pos = 0;
    int z;
    while(pos<100)
    {
        count++;
        do
        {
            z = Zar();
            printf("Hod nomer %d. Padna se %d. ", count, z);
            if (pos==0 && !flag)
            {
                if (z!=6)
                {
                    printf("Igracha ne moje da se dviji. \n");
                    break;
                }
                else
                {
                    printf("Igrachut moje da se dviji. \n");
                    flag = 1;
                    continue;
                }
            }
            if (pos+z>100)
            {
                printf("Igrachut ne moje da se dviji sled poslednata si poziciq. \n");
                continue;
            }

            pos+=z;

            switch(pos)
            {
            case 26:
                printf("Igrachut se izkachva po stulbata. ");
                pos = 51;
                break;
            case 44:
                printf("Igrachut se izkachva po stulbata. ");
                pos = 54;
                break;
            case 37:
                printf("Igrachut se izkachva po stulbata. ");
                pos = 41;
                break;
            case 35:
                printf("Igrachut be izqden ot zmiq. ");
                pos = 15;
                break;
            case 57:
                printf("Igrachut be izqden ot zmiq. ");
                pos = 24;
                break;
            case 97:
                printf("Igrachut be izqden ot zmiq.");
                pos = 78;
                break;
            }
            printf("Poziciqta na igracha  e %d.\n", pos);
        }
        while(z==6 && pos!=100);
    }
    printf("\nKrai na igrata!\n");
}
