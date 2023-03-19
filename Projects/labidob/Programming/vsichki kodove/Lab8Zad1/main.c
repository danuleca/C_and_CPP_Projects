#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int br = 0;
    int c;
    while(1)
    {
        printf("Vuvedi chislo: ");
        int a;
        if (!scanf("%d",&a)) {
            printf("Wrong argument.\n");
            while ((c = getchar()) != EOF && c != '\n');
            continue;
        }
        if (a==-999) break;
        if(a<=0) br++;
        else sum+=a;
    }
    printf("Suma = %d, Broi = %d",sum,br);
}
