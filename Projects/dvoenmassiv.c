#include <stdio.h>
int main()
{
    int n,m,i,j;
    int masiv[10][10];
    do{
        printf("vyvedete maksimalen nomer na redowe(ot 5 do 10): ");
        scanf("%d",&n);
    }
    while(n<5||n>10);
    do{
        printf("vyvedete maksimalen nomer na koloni(ot 5 do 10): ");
        scanf("%d",&m);
    }
    while(m<5||m>10);
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
    {
        masiv[i][j]=rand()%100;
        printf("%d ",masiv[i][j]);
    }
    }
}
