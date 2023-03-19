#include <stdio.h>
#include <stdlib.h>

char* moneyToStr(char *str,int totalSt){
    int lv = totalSt / 100;
    int st = totalSt % 100;
    sprintf(str,"%d.%02d",lv,st);
    return str;
}

int main()
{
    /*
    float m1 = 0.1;
    float m2 = 0.2;
    float m3 = 0.3;
    float result;
    for (int i = 0; i<10000; i++){
        result += 0.1;
    }
    //if (result==0.3) printf("equals\n");
    //float total = result - m3;
    printf("%.20f",result);
    return 0;
    */

    char str[20];
    int msgs;
    scanf("%d",&msgs);
    int min;
    scanf("%d",&min);
    int addMsgs = msgs-20;
    if (addMsgs<0) addMsgs = 0;
    int addMsgsPrice = addMsgs * 6;
    printf("%d additional messages for %s levas\n", addMsgs, moneyToStr(str, addMsgsPrice));
    int addMin = min-60;
    if (addMin<0) addMin = 0;
    int addMinPrice = addMin * 10;
    printf("%d additional minutes for %s levas\n", addMsgs, moneyToStr(str, addMinPrice));
    int taxes = (addMsgsPrice + addMinPrice)*0.20;
    int totalBill = 1200 + addMsgsPrice + addMinPrice + taxes;
    printf("%s additional taxes\n",moneyToStr(str, taxes));
    printf("%s total bill",moneyToStr(str, totalBill));
}
