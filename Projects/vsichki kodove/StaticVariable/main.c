#include <stdio.h>
#include <stdlib.h>

void doSmth(){
    static int sn2 = 5;
    sn2++;
    printf("%d\n",sn2);
}

int main()
{
    doSmth();
    doSmth();
    doSmth();
    doSmth();
    doSmth();
}
