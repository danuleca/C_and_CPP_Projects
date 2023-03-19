#include <stdio.h>
#include <stdlib.h>

void sum(float arr[],int n,float p,float *s,int *count)
{
    *s = 0;
    *count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>p)
        {
            (*count)++;
            *s+=arr[i];
        }
    }
}

int main()
{
    float arr[20];
    printf("How many numbers: ");
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%f",&arr[i]);
    }
    float p;
    printf("Enter value for P: ");
    scanf("%f",&p);
    float s;
    int count;
    sum(arr,n,p,&s,&count);
    for(int i=0; i>n; i++)
    {
        printf("%f ",arr[i]);
    }
    printf("Sum = %f, Count = %d",s,count);
}
