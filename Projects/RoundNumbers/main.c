#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long k;
    printf("Enter k: ");
    scanf("%I64u",&k);
    k--;
    /*
    long long r=0,p=1;
    while(k>0){
        r+=(k%2)*6*p;
        p*=10;
        k/=2;
    }
    printf("%lld\n",r);
    */
    unsigned long long one = 1;
    unsigned long long m = one << 63;
    while((k & m) == 0) m>>=1;
    while(m>0){
        printf("%c", (k & m) ? '6': '0');
        m>>=1;
    }



}
