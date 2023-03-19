#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int count_odd(int numbers[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(numbers[i]%2==1) count++;
    }
    return count;
}

int find_sum(int numbers[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=numbers[i];
    }
    return sum;
}

int find_max(int numbers[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<numbers[i]) max=numbers[i];
    }
    return max;
}

int main()
{
    int n;
    int numbers[100];
    printf("Enter how many numbers you want: ");
    scanf("%d",&n);
    printf("Numbers: ");
    for(int i=0;i<n;i++)
    {
        //printf("Enter %d number: ",i+1);
        scanf("%d",&numbers[i]);
    }
    int max = find_max(numbers,n);
    printf("Max = %d\n",max);
    int sum = find_sum(numbers,n);
    printf("Sum = %d\n",sum);
    int count = count_odd(numbers,n);
    printf("Count of odd numbers = %d\n",count);
}
