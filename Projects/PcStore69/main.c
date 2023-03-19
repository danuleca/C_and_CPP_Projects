#include <stdio.h>
#include <stdlib.h>
void inputCpu(double *cpu)
{
    do
    {
        printf("CPU(200.00 to 3000.00): ");
        scanf("%lf", cpu);
    }
    while(*cpu<200 || *cpu>3000);
}
void inputGpu(double *gpu)
{
    do
    {
        printf("GPU(100.00 to 1500.00): ");
        scanf("%lf", gpu);
    }
    while( *gpu<100 || *gpu>1500);
}
void inputRam(double *ram)
{
    do
    {
        printf("RAM(80.00 to 500.00): ");
        scanf("%lf", ram);
    }
    while(*ram<80 || *ram>500);
}
void inputRamCount(int *ramc)
{
    do
    {
        printf("RAM count(1 to 4): ");
        scanf("%d", ramc);
    }
    while(*ramc<1 || *ramc>4);
}
void inputDiscount(double *dis)
{
    do
    {
        printf("Discount(0.01 to 0.1): ");
        scanf("%lf", dis);
    }
    while(*dis<0.01 || *dis>0.1);
}
int main()
{
    double lev = 1.57;
    double cpu,gpu,ram,dis;
    int ramc;
    inputCpu(&cpu);
    inputGpu(&gpu);
    inputRam(&ram);
    inputRamCount(&ramc);
    inputDiscount(&dis);
    double price = ((1-dis)*(cpu+gpu)+(ram*ramc))*lev;
    printf("Money needed = %.2lf levs", price);
}
