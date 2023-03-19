#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Vavedete izraz: ");
    float a, b;
    char op;
    scanf("%f %c %f", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("Sborat na %.2f i %.2f e %.2f.", a, b, a + b);
        break;
    case '-':
        printf("Razlikata na %.2f i %.2f e %.2f.", a, b, a - b);
        break;
    default:
        printf("%c e nepoddarjana operaciq !",op);
        break;
    }
}
