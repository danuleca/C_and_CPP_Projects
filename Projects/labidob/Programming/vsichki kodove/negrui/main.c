#include <stdio.h>
#include <stdlib.h>

enum year {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

int main()
{
    for (int i=Jan; i<=Dec; i++)
        printf("%d ", i);
}
