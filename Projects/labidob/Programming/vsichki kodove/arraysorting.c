#include <stdio.h>
int bubble ()
{
    int a[10],i,k,n,c,sorted;
    printf("Vuvedete broi chisla(max=10): ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Vuvedi %d chislo",i+1);
        scanf("%d",&a[i]);
    }
    for(i=1; i<n; i++)
    {
        sorted=1;

        for(k=0; k<n-i; k++)
        {
            if(a[k]>a[k+1])
            {
                c=a[k];
                a[k]=a[k+1];
                a[k+1]=c;
                sorted=0;
            }
        }
        if(sorted)break;
    }
    for (i=0; i < n; i++)
        printf("%d", a[i]);
}
int prqka_selekciq ()
{
    int a[100], n, c, d, poz, t;

    printf("Broi na chislata: \n");
    scanf("%d", &n);
    printf("Vuvedi %d chisla", n);

    for (c=0; c<n; c++) scanf("%d", &a[c]);
    for (c=0; c<(n-1); c++)
    {
        poz = c;

        for (d=c+1;d<n;d++)
        {
            if (a[poz]>a[d])
                poz = d;
        }
        if (poz!=c)
        {
            t = a[c];
            a[c] = a[poz];
            a[poz] = t;
        }
    }

    printf("Sortirani po vuzhodqsht red: \n");

    for (c=0;c<n;c++)
        printf("%d\n", a[c]);
}
int prqko_vmukvane ()
{
    int mas[10],n,i, c, k;
    printf("Broi: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Vuvedi %d chislo",i+1);
        scanf("%d",&mas[i]);
    }
    for (i = 1; i < n; i++)
    {
        c = mas[i];
        k = i - 1;
        while (k>=0&&mas[k]>c)
        {
            mas[k+1]=mas[k];
            k--;
        }
        mas[k+1] = c;
    }
    for (i=0; i < n; i++)
        printf("%d\n", mas[i]);
}
int main ()
{
    int op;
    printf("1.Bubble sorting \n2. Prqka selekciq \n3. Prqko vmukvane\n->");
    do
    {

        scanf("%d",&op);
        switch(op)
        {
        case 1:
            bubble ();
            break;
        case 2:
            prqka_selekciq ();
            break;
        case 3:
            prqko_vmukvane ();
            break;
        default:
            printf("Invalid option!\n");

        }
    }
    while(op!=3);
}

