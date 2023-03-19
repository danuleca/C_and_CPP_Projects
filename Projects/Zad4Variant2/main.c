#include <stdio.h>
#include <stdlib.h>
float  CountSum(float arr[], int n, int* notZero)
{
    float sum=0;
    *notZero = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0) (*notZero)++;
        if(arr[i]>0) sum+=arr[i];
    }
    return sum;
}
int main()
{
    float beta[15];
    int n;
    printf("How many numbers? ");
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%f",&beta[i]);
    for(int i=0; i<n; i++) printf("Number %d is %f\n",i+1,beta[i]);
    int notZero;
    float sum = CountSum(beta,n,&notZero);
    printf("Sum = %f, Numbers different from 0 = %d\n",sum,notZero);
}
