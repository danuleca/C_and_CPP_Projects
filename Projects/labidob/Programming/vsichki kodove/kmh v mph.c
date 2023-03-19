#include <stdio.h>
float mik = 1.60934;
int main ()
{
    float skorostvmili, skorostvkilometri;
    printf("vuvedi skorost v mph");
    scanf("%f",&skorostvmili);
    skorostvkilometri = skorostvmili * mik;
    printf("Skorost v kilometri: %f",skorostvkilometri);
    return 0;
}
