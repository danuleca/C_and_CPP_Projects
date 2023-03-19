#include<stdio.h>

void main()
{
    int n,chislo,NovoChislo,max;
    scanf("%d",&n);
    scanf("%d",&chislo);
    max = chislo;
    while(n>=2)
    {
        scanf("%d",&NovoChislo);
        if(NovoChislo>max)
        {
            max = NovoChislo;
        }
        n = n - 1;
    }


    printf("%d",max);


}
