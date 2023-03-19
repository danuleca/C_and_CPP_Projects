#include <stdio.h>
int main()
{
    //zadacha za sumata na chislata ot 1 do N bez rekursiq
    int i, n, sum=0;

    printf("N: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sbor = %d", sum);

    return 0;
}
int sumata_na_chislata_ot_1_do_N_s_rekursiq(int n2)
{
    int sum2;
    printf("N:");
    if (n2 == 1)
    {
        return 1;
    }
    else
    {
        sum2=n2+sumata_na_chislata_ot_1_do_N_s_rekursiq(n2 - 1);
    }
    return sum2;
}
int astepenn(a,b)
{
    int chi=0,k=1,end=1;
    float x;
    if(b<0)
    {
        chi = 1;
        b = b * -1;
    }
    else
    {
        if(b==0)
        {
            chi = 2;
        }
    }

    while(k<=b)
    {
         end*= a;
        k++;
    }

    if(chi==0)
    {
        x=(float)end;
    }
    if(chi==1)
    {
        x = (float)1/end;
    }
    if(chi==2)
    {
        x=(float)1;
    }

    printf("Otgovor:%.2f\n",x);

}
int a_stepen_n_s_rekursiq ();
int glavno() {
    int ch, step, rezultat;
    printf("Chislo: ");
    scanf("%d", &ch);
    printf("Stepen: ");
    scanf("%d", &step);
    rezultat = stepenta(ch, step);
    printf("%d^%d = %d",ch, step, rezultat);
    return 0;
}

int stepenta(int ch, int step) {
    if (step != 0)
        return (ch * stepenta(ch, step - 1));
    else
        return 1;
}

