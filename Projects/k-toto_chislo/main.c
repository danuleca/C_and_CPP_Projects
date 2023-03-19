#include<stdio.h>

struct info
{
    int k;
} inf;

int isRound(int chislo)
{
    if(chislo == 0)
    {
        return 1;
    }
    while(chislo != 0)
    {
        if(chislo % 10 != 6 && chislo % 10 != 0)
        {
            return 0;
        }
        chislo = chislo / 10;
    }
    return 1;
}

int count(int k)
{
    int br=0;
    for(long long i=0; i<10000000000000000; i++)
    {
        if(isRound(i))
        {
            br++;
        }
        if(br == k)
        {
            return i;
            break;
        }
    }

}

int main()
{
    do
    {
        printf("koe chislo: ");
        scanf("%d", &inf.k);
    }
    while(inf.k < 0 || inf.k > 1000);
    printf("%d\n\n", count(inf.k));
}
