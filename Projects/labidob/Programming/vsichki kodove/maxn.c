#include <stdio.h>
int main ()
{
    int n,big,i,num;
    printf("Kolko chisla: ");
    scanf("%d",&n);
    printf("chislo 1:");
    scanf("%d",&big);
    {
    if(n==1)
        printf("%d",big);
    else for(i=2;i<=n;i++){
        printf("chislo %d: ",i);
        scanf("%d",&num);
    if (big<num)
        big=num;
    }
     printf("%d",big);
    }
    return 0;
}

