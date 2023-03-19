#include <stdio.h>
#include <stdlib.h>

double test(double mass[], int n, int *countOfPositives)
{
    int count=0;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        if(mass[i]>=0) {
            count++;
            sum+=mass[i];
        }
    }
   double avr=sum/count;
   *countOfPositives = count;
   return avr;
}
void printArray (int n, double mass[])
{
    for(int i=0;i<n;i++)
    {
        printf("%lf  ",mass[i]);
    }
}

int main()
{
    double mass[100];
    int n;
    printf("How many numbers? ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d number: ",i);
        scanf("%lf",&mass[i]);
    }
    int countOfPositives;
    double average = test(mass,n,&countOfPositives);
    printf("Count of positives = %d\n",countOfPositives);
    printf("Average = %lf\n",average);
    printArray(n,mass);
}
