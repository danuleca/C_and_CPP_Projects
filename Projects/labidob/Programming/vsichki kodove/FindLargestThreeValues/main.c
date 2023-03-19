#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int n;
    printf("How many numbers: ");
    scanf("%d",&n);
    int first=INT_MIN,second=INT_MIN,third=INT_MIN;
    for(int i=0; i<n; i++)
    {
        printf("Enter %d number: ",i+1);
        int num;
        scanf("%d",&num);
        //if (num>first) swap(&num,&first);
        //if (num>second) swap(&num,&second);
        //if (num>third) swap(&num,&third);
        if (num>first){
            third=second;
            second=first;
            first=num;
        }
        else if (num>second){
            third=second;
            second=num;
        }
        else if (num>third){
            third=num;
        }
    }
    printf("%d, %d, %d",first,second,third);
}
