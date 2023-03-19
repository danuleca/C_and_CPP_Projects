#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factor(int num, int i){
    while(num % i == 0)
    {
        num/=i;
        printf("%d ",i);
    }
    return num;
}

int main()
{
    int num;
    printf("Enter a non-prime number: ");
    scanf("%d",&num);
    num = factor(num, 2);
    for(int i=3, s=sqrt(num); i<=s; i+=2) num = factor(num,i);
    if (num>2) printf("%d ", num);
}
