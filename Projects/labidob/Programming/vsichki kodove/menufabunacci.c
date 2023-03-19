#include <stdio.h>
// izpolzvah skeleta ot starata zadacha za menu-to, no tozi put e bez greshki :)

int nvuvfabonachi (chislo)
{
    int a=1,b=1,k;
    int i;
    for (i = 1; i <= chislo-1; ++i)
    {
        k = a + b;
        a = b;
        b = k;
    }
    return a;
}
int naigolqmovuvfabunichi(chislo)
{
    int a=1,b=1,k;
    int i;
    for (i = 1; a <= chislo-2; ++i)
    {
        k = a + b;
        a = b;
        b = k;
    }
    return a;
}
int naimalkovuvfabunachi(chislo)
{
    int a=1,b=1,k;
    int i;
    for (i = 1; a <= chislo-1; ++i)
    {
        k = a + b;
        a = b;
        b = k;
    }
    return a;
}
int main(void)
{
    int op;
    int chislo,a,b;
    do
    {
        printf("\n1. n-toto chislo na fibonacci");
        printf("\n2. nai-golqmoto chislo ot fibonacci, po malko ot n");
        printf("\n3. nai-malkoto chislo na fibonacci po-golqmo ot n\n4. exit\n ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
        printf("Chislo: ");
        scanf("%d",&chislo);
        printf("%d-toto chislo ot fibonacci e %d\n\n",chislo,nvuvfabonachi(chislo));
        break;
        case 2:
        printf("Chislo: ");
        scanf("%d",&chislo);
        printf("%d\n\n",naigolqmovuvfabunichi (chislo));
        break;
        case 3:
        printf("Chislo: ");
        scanf("%d",&chislo);
        printf("%d\n\n",naimalkovuvfabunachi (chislo));
        break;
        case 4:break;
        default:printf("\nIncorrect choice\n\n");break;
        }
    }
    while(op!=4);

    return 0;
}



