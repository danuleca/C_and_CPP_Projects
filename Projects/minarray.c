#include <stdio.h>
const int N = 100;
int main ()
{
    float mas[N], min;
    int ix,minix,n;
    printf("Vuvedete broq na chislata: ");
    scanf("%d",&n);
    for (ix=0;ix<n;ix++)
    {
        printf("Vuvedi stoinost za %d nomer chislo: ",ix+1);
        scanf("%f",&mas[ix]);
    }
    min=mas[0];
    minix=0;
    for (ix=0;ix<n;ix++)
    {
        if(mas[ix]<min)
            min=mas[ix];
            minix=ix;
    }
    printf("Nai-malkoto ot vuvedenite chisla e %f s index %d",min,minix+1);
}
