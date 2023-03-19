#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("File %s, line %d, date %s %s", __FILE__, __LINE__, __DATE__, __TIME__);
}
