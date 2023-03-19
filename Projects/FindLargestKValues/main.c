#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int findIndex(int arr[], int n, int value)
{
    for(int i=0; i<n; i++) if (value>arr[i]) return i;
    return -1;
}

int main()
{
    int n,k;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("How many largest numbers: ");
    scanf("%d",&k);
    if (k>n){
        printf("Not enough numbers.\n");
        return 1;
    }
    int *arr = malloc(sizeof(int)*k);
    for(int i=0; i<n; i++) arr[i] = INT_MIN;
    for(int i=0; i<n; i++)
    {
        printf("Enter %d number: ",i+1);
        int num;
        scanf("%d",&num);
        int index = findIndex(arr, k, num);
        if (index==-1) continue;
        for(int j=k-1;j>index;j--) swap(&arr[j],&arr[j-1]);
        arr[index]=num;
    }
    for(int i=0;i<k;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    free(arr);
}

