#include <stdio.h>
#include <stdlib.h>
int main()
{
    const float discount = 0.65;
    printf("How many items? ");
    int count;
    scanf("%d",&count);
    for(int i=0;i<count;i++)
    {
        printf("Enter the price for the %d item: ",i+1);
        float price;
        scanf("%f",&price);
        float discountedPrice = price*(1-discount);
        printf("Discounted price for the %d item is %.2f\n",i+1,discountedPrice);
    }
}
