#include <stdio.h>
#define N 10
int main ()
{
    int mas[N];
    int ploshtadka=1,golemina=0,i,n,nachalo=1,max;
    printf("Vuvedete broi na chislata(max=10): ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Vuvedete chislo nomer %d: ",i+1);
        scanf("%d",&mas[i]);
    }
    for(i=0; i<n; i++)
    {
        if(mas[i]==mas[i+1])
        {
            ++golemina;
        }
        else
        {
            if(golemina > max)
            {
                max=golemina;
                nachalo = i-golemina;
            }
            golemina = 1;
    if (golemina > max)
    {
        max = golemina;
        nachalo = i-golemina;
    }

        }
    }
    printf("nai-golqma ploshtadka: %d nachalo: %d",max,nachalo);
}
