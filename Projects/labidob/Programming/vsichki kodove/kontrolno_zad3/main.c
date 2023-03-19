#include <stdio.h>
#include <stdlib.h>
int rec(int k, int m)
{
    if(m<=k) return 0;
    return rec(k,m-1) + m;

}
int main()
{
    int k=2, m=7;
    int result = rec(k,m);
    printf("%d",result);
}
