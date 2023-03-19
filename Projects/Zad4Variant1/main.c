#include <stdio.h>
void print (int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Number %d is %d\n",i+1,arr[i]);
    }
}
void change (int arr[],int n, int *brn)
{
    *brn = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0) (*brn)++;
        else arr[i] = 0;
    }
}
int main()
{
    const int SIZE = 20;
    int arr[SIZE];
    int n;
    printf("How many numbers?\n ");
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);
    print(arr,n);
    int brn = 0;
    change(arr,n,&brn);
    print(arr,n);
    printf("Count of even numbers = %d\n",brn);

}
