#include <stdio.h>
#include <stdlib.h>

int isRound(long long chislo)
{
    if(chislo == 0)
    {
        return 1;
    }
    while(chislo != 0)
    {
        int digit = chislo % 10;
        if(digit != 6 && digit != 0)
        {
            return 0;
        }
        chislo = chislo / 10;
    }
    return 1;
}

int main()
{
    int k,count=0;
    long long result;
    printf("Enter k: ");
    scanf("%d",&k);
    for(long long i=0; i<100000000000; i++)
    {
        if(isRound(i))
        {
            count++;
        }
        if(count==k)
        {
            result = i;
            break;
        }
    }
    printf("Number %d round number is %lld\n",k,result);
}
