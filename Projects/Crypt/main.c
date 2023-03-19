#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

void decrypt(int encrypted[],char *str,int x, int y)
{
    char *p = str;
    while(*p!=0)
    {
        int v = encrypted[p - str] - 127 - x*x + y*y*y;
        *p = (char)v;
        p++;
    }
}

void encrypt(int encrypted[], char *str,int x,int y)
{
    char *p = str;
    while(*p!=0)
    {
        int v = *p + 127 + x*x - y*y*y;
        encrypted[p - str] = v;
        *p = (v>=0 && v<=32) ? '?' : (char)v;
        p++;
    }
}

int main()
{
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    char str[SIZE];
    printf("Enter text to crypt: ");
    getchar();
    fgets(str,SIZE,stdin);
    char *p = strchr(str,'\n');
    if (p) *p=0;
    int l = strlen(str);
    int encrypted[SIZE];
    encrypt(encrypted,str,x,y);
    printf("Encrypted text: '%s'\n",str);
    for(int i = 0; i<l; i++) printf("%d ", encrypted[i]);
    printf("\n");
    decrypt(encrypted,str,x,y);
    printf("Decrypted text: '%s'\n",str);

}
