#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    const int N = 100;
    float mas[N];
    int n;
    printf("Kolko stoinosti ste vavedete: ");
    scanf("%d", &n); //� ������ ��� 100 ��������, �� ����� �� ������� � ���� � ���� �� ���, ������� �� ����������
    if (n<1 || n>100){
        fprintf(stderr, "Error: Wrong argument.\n");
        return EXIT_FAILURE;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Please enter %d:", i);
        scanf("%f",&mas[i]);
    }
    float max = FLT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(mas[i] > max) max = mas[i];
    }
    printf("Max = %f", max);
    return EXIT_SUCCESS;
}
