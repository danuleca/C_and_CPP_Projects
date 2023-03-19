#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int digits = 1, k = n;
    while(k>0) {
        digits++;
        k/=10;
    }
    char *specificator = malloc(sizeof(char)*(digits+1));
    if (specificator==NULL){
        fprintf(stderr, "Malloc error %d\n", errno);
        return 1;
    }
    sprintf(specificator,"%%%dd",digits);
    //printf("%s\n",specificator);
    //printf("%c\n", specificator[1]);
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf(specificator,j+i);
        }
        printf("\n");
    }
    free(specificator);
}
