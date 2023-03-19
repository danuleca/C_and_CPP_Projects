#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j,n;
    char names[30][100],s[100];
    printf("How many numbers?\n");
    scanf("%d",&n);
    printf("Enter the names:\n");
    for(i=0; i<n; i++)
    {
        scanf("%s",names[i]);
    }


    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(names[i],names[j])>0)
            {
                strcpy(s,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],s);
            }

        }

    }
    printf("Names in order:\n");
    for(i=0; i<n; i++)
    {
        printf("%s\n",names[i]);
    }

}
