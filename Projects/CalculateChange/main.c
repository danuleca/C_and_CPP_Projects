#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price;
    scanf("%f",&price);
    float given;
    scanf("%f",&given);
    int change = 100*given - 100*price;
    if(change<0)
    {
        printf("Not enough money!");
        return 0;
    }
    int count = change / 100;
    if(count>0) printf("%d x 1 lev\n",count);
    change %= 100;
    count = change / 50;
    if(count>0) printf("%d x 50 stotinki\n",count);
    change %= 50;
    count = change / 20;
    if(count>0) printf("%d x 20 stotinki\n",count);
    change %= 20;
    count = change / 10;
    if(count>0) printf("%d x 10 stotinki\n",count);
    change %= 10;
    count = change / 5;
    if(count>0) printf("%d x 5 stotinki\n",count);
    change %= 5;
    count = change / 2;
    if(count>0) printf("%d x 2 stotinki\n",count);
    change %= 2;
    if(change>0) printf("%d x 1 stotinka\n",change);
}
