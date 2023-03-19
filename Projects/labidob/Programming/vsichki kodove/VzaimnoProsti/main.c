#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    while(b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int getMaxCoprimeLength(int arr[], int n, int index)
{
    for(int i=index; i<n; i++)
    {
        for(int j=index; j<i; j++)
        {
            if (gcd(arr[j],arr[i])!=1) return i - index;
        }
    }
    return n - index;
}

int main()
{
    int count;
    int arr[1000];
    FILE *f = fopen("numbers.txt", "r");
    if(f == NULL)
    {
        printf("Error with opening the file!\n");
        return 0;
    }
    fscanf(f,"%d", &count);
    int n = 0;
    while(n<count && fscanf(f, "%d", &arr[n])!=EOF)
    {
        n++;
    }
    if (n!=count){
        fclose(f);
        printf("Wrong input.\n");
        return 1;
    }
    fclose(f);
    int maxLength = 1;
    int maxIndex = -1;
    for (int i = 0; i < count; i++)
    {
        int length = getMaxCoprimeLength(arr, count, i);
        if (maxLength<length)
        {
            maxLength = length;
            maxIndex = i;
        }
    }
    f = fopen("numbers.txt", "w");
    if(f == NULL)
    {
        printf("Error opening file for writing!\n");
        return 0;
    }
    fprintf(f,"Max coprime length: %d\n",maxLength);
    fprintf(f,"Longest coprime sequence: ");
    for(int i = maxIndex; i<maxIndex+maxLength; i++)
    {
        fprintf(f,"%d ", arr[i]);
    }
    fprintf(f,"\n");
    fclose(f);
}
