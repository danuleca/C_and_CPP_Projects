#include<stdio.h>
int main(void)
{

    char c;
    int a = 0, p = 1, minus = 0;

    do
    {
        c = getchar();
        if(c == '\n')
            break;
        else if(c > '9' || c < '0' && c != '-' && c != '+')
        {
            printf("INVALID NUMBER!");
            return 0;
        }
        else if(c == '-'){
            minus = 1;
        }
        else if(c == '+');
        else{
        a += p*(c-48);
        p = 10;
        }
    }
    while(1);
    int b = 0;
    while(p > 0)
    {
        b += a%10;
        p/=10;
        a/=10;
    }

    if(minus)
        b = 0 - b;

    printf("%d", b/10);
    return 0;
}
