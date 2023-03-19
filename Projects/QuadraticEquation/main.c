#include <stdio.h>
#include <math.h>
int main(void)
{
    float a,b,c,koren1,koren2;
    printf("Vuvedi a: \n");
    scanf("%f",&a);
    printf("Vuvedi b: \n");
    scanf("%f",&b);
    printf("Vuvedi c: \n");
    scanf("%f",&c);
    float d = b*b-4*a*c;
    if(d>=0)
    {
        koren1 = (-b+sqrt(b*b-4*a*c) ) / (2*a);
        koren2 = (-b-sqrt(b*b-4*a*c) ) / (2*a);
        printf("\n Koren 1 = %.2f ",koren1);
        printf("\n Koren 2 =  %.2f\n ",koren2);
    }
    else
    {
        printf("\n Nqma realni koreni! ");
    }
    printf("D = %.2f",d);
    printf("\n");
    //2,-3,1 testvano
}
