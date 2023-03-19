#include <stdio.h>
#include <stdlib.h>

int binary_search ()
{
    int i, first, last, mid, n, search, array[100];

    printf("How many numbers?\n");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("Enter %d value: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("Enter value to find: ");
    scanf("%d",&search);

    first=0;
    last = n-1;
    mid=(first+last)/2;

    while (first<=last)
    {
        if (array[mid]<search)
            first=mid+1;
        else if(array[mid]==search)
        {
            printf("%d found at location %d.\n", search, mid+1);
            break;
        }
        else
            last=mid-1;

        mid=(first + last)/2;
    }
    if (first>last)
        printf("Not found! %d isn't present in the list.\n",search);
}
int disordered ()
{
    int search,mass[100],n,i,isfound=0;

    printf("How many numbers?\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter %d value: \n",i+1);
        scanf("%d",&mass[i]);
    }
    printf("Enter value to find: ");
    scanf("%d",&search);
    for(i=0; i<n; i++)
    {
        if(search==mass[i])
        {
            printf("%d is found at location %d\n",search,i+1);
            isfound=1;
            break;
        }
    }
    if(isfound==0) printf("%d is not found\n",search);
}
int ordered()
{
    int search,mass[100],n,i,isfound=0;

    printf("How many numbers?\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter %d value: \n",i+1);
        scanf("%d",&mass[i]);
    }
    printf("Enter value to find: ");
    scanf("%d",&search);
    for(i=0; i<n; i++)
    {
        if(search==mass[i])
        {
            printf("%d is found at location %d\n",search,i+1);
            isfound=1;
            break;
        }
    }
    if(isfound==0) printf("%d is not found\n",search);
}
int main ()
{
    int op;
    do
    {
        printf("1.Binary Search.\n2.Ordered array\n3.Disordered array.\n->");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            binary_search ();
            break;
        case 2:
            disordered ();
            break;
        case 3:
            ordered();
            break;
        default:
            printf("Invalid option!\n");

        }
    }
    while(op!=3);
}
