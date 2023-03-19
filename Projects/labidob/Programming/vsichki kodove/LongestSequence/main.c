#include <stdio.h>
#include <stdlib.h>

int findLongestSequence(int a[], int n, int *sequenceLength)
{
    int maxLenght=1,maxIndex=0,index=0,lenght=1,prev=a[0];
    for(int i=1;i<n;i++)
    {
        if(prev==a[i]) lenght++;
        else{
            if (lenght > maxLenght)
            {
                maxIndex = index;
                maxLenght = lenght;
            }
            index = i;
            lenght = 1;
            prev = a[i];
        }
    }
    if (lenght > maxLenght)
    {
        maxIndex = index;
        maxLenght = lenght;
    }
    *sequenceLength = maxLenght;
    return maxIndex;
}

void print(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[] = {1,3,3,5,5,5,2,3,7,7,7,7,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int length;
    int index = findLongestSequence(a, n, &length);
    print(a,n);
    printf("\npos=%d, length=%d\n", index, length);
    return 0;
}
