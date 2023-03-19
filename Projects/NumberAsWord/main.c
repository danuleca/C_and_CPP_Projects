#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* digitToText(int num){
    switch(num){
        case 0: return "zero"; break;
        case 1: return "one"; break;
        case 2: return "two"; break;
        case 3: return "three"; break;
        case 4: return "four"; break;
        case 5: return "five"; break;
        case 6: return "six"; break;
        case 7: return "seven"; break;
        case 8: return "eight"; break;
        case 9: return "nine"; break;
        case 10: return "ten"; break;
        case 11: return "eleven"; break;
        case 12: return "twelve"; break;
        case 13: return "thirteen"; break;
        case 14: return "fourteen"; break;
        case 15: return "fifteen"; break;
        case 16: return "sixteen"; break;
        case 17: return "seventeen"; break;
        case 18: return "eighteen"; break;
        case 19: return "nineteen"; break;
        case 20: return "twenty"; break;
    }
    return NULL;
}

char* tensToText(int num){
    switch(num){
        case 2: return "twenty"; break;
        case 3: return "thirty"; break;
        case 4: return "fourty"; break;
        case 5: return "fifty"; break;
        case 6: return "sixty"; break;
        case 7: return "seventy"; break;
        case 8: return "eighty"; break;
        case 9: return "ninety"; break;
    }
    return NULL;
}

void intToText(char *str, int n, int num){
    int num1 = num / 100 % 10;
    int num2 = num / 10 % 10;
    int num3 = num % 10;
    if (num1>0){
        strncat(str,digitToText(num1),n);
        strncat(str," hundred",n - strlen(str));
        if (num2>0 || num3>0) strncat(str," and ",n - strlen(str));
    }
    if (num2>1){
        strncat(str,tensToText(num2),n - strlen(str));
        if (num3>0) strncat(str," ",n - strlen(str));

    }
    if (num3>0){
        if (num2==1) num3+=10;
        strncat(str,digitToText(num3),n - strlen(str));
    }
}

int main()
{
   int num;
   scanf("%d",&num);
   char str[100] = {0};
   intToText(str, 100, num);
   printf("%s\n", str);
}
