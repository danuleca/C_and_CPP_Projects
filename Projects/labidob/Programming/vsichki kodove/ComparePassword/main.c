#include <stdio.h>
#include <string.h>

int main()
{
    char *predef_pass = "parola";
    char user_pass[20]; //���� �� ������� �� 19 ������� + ����������� 0
    int tries = 0;
    int result;
    do
    {
        printf("Enter pass:");
        scanf("%19s", user_pass); //���������� ����� �� 19 �������
        tries++;
        result = strcmp(predef_pass, user_pass);
    }
    while (result && tries<3);
    if (result) return 5;
    printf("Welcome.");
    return 0;
}
