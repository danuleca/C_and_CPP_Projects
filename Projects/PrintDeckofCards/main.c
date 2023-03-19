#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    char arr[3];
    printf("Enter a card from the deck: ");
    scanf("%2s",arr);
    int num=0;
    if(strcmp(arr,"J") == 0) num = 11;
    else if(strcmp(arr,"Q") == 0) num = 12;
    else if(strcmp(arr,"K") == 0) num = 13;
    else if(strcmp(arr,"A") == 0) num = 14;
    else
    {
        int r = sscanf(arr,"%d",&num);
        if(r!=1 || num<2 || num>10)
        {
            printf("Wrong input!\n");
            return 0;
        }
    }
    for(int i=2;i<=num;i++)
    {
        if(i==11) printf("J of spades, J of clubs, J of hearts, J of diamonds\n");
        else if(i==12) printf("Q of spades, Q of clubs, Q of hearts, Q of diamonds\n");
        else if(i==13) printf("K of spades, K of clubs, K of hearts, K of diamonds\n");
        else if(i==14) printf("A of spades, A of clubs, A of hearts, A of diamonds\n");
        else printf("%d of spades, %d of clubs, %d of hearts, %d of diamonds\n",i,i,i,i);
    }
}
