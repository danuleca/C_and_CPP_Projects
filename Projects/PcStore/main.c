#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lev = 1.57;
    float pricePro,priceVideo,priceRamForOne,discount;
    int ramCount;
    do
    {
        printf("Enter processor's price(200.00 ... 3000.00): \n");
        scanf("%f",&pricePro);
    }
    while(pricePro < 200.00 && pricePro > 3000.00);
    do
    {
        printf("Enter Video Card's price(100.00 ... 1500.00): \n");
        scanf("%f",&priceVideo);
    }
    while(priceVideo < 100.00 && priceVideo > 1500.00);
    do
    {
    printf("Enter Ram's price(80.00 ... 500.00): \n");
    scanf("%f",&priceRamForOne);
    }
    printf("Enter Ram's count(1 ... 4): ");
    scanf("%d",&ramCount);
    printf("Enter Discount for the Processor and the Video Card(0.01 ... 0.1): \n");
    scanf("%f",&discount);

    float sumProVideo = pricePro + priceVideo;
    float discountedSum = sumProVideo - (sumProVideo * discount);
    float ramPrice = priceRamForOne * ramCount;
    float totalPrice = sumProVideo + discountedSum + ramPrice;
    float totalPriceInLevs = totalPrice * lev;

    printf("All parts are worth %.2f.\n",totalPriceInLevs);
    printf("Money needed %.2f.",totalPriceInLevs);
}
