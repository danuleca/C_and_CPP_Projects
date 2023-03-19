#include <stdio.h>
#include <stdlib.h>

int main()
{
    //zad1
    int count=0;
    for(int i=0; i<100; i++)
    {
        printf("Neshto ");
        count++;
    }
    printf("Count = %d",count);
}
void zad2()
{
    //zad2
    int count=0;
    for(int i=100; i>0; i--)
    {
        printf("%d\n",i);
        count++;
    }
    printf("Count = %d",count);
}
void zad3 ()
{
    printf("Vuvedi broi: ");
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=0; i<n; i++)
    {
        printf("Neshto\n");
        count++;
    }
    printf("Count = %d, Vuvedeno chislo: %d",count,n);
}
void zad4 ()
{
    for(int i=0; i<1000; i++)
    {
        if(i%2==0) printf("%d",i);
    }
}
void zad5 ()
{
    for(int i=0; i<1000; i++)
    {
        if(i%2==1) printf("%d",i);
    }
}
void zad6 ()
{
    printf("Vuvedi chislo: ");
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        if(i%2==0) printf("%d",i);
    }
}
void zad7 ()
{
    printf("Vuvedi chislo: ");
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        if(i%2==1) printf("%d",i);
    }
}
void zad891011 ()
{
    int num;
    printf("Vuvedi chislo: ");
    scanf("%d",&num);
    printf("Chislo za proverka na delene: ");
    int delitel;
    scanf("%d",&delitel);
    if(num%delitel==0) printf("Deli se!");
    else printf("Ne se deli!");
}
void zad12 ()
{
    int n, i, flag = 0;
    printf("Vuvedi chislo: ");
    scanf("%d",&n);
    for (i=2; i<=n/2; ++i)
    {

        if (n%i==0)
        {
            flag=1;break;
        }
    }
    if (n==1)
    {
        printf("Nito prosto, nito sustavno");
    }
    else
    {
        if (flag==0) printf("Prosto!", n);
        else printf("Sustavno!", n);
    }

}
void zad13a ()
{
    printf("Vuvedi A:");
    int a;
    scanf("%d",&a);
    printf("Vuvedi B");
    int b;
    scanf("%d",&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("B = %d",b);
    printf("A = %d",a);
}
void zad13b ()
{

    printf("Vuvedi A: ");
    int a;
    scanf("%d",&a);
    printf("Vuvedi B: ");
    int b;
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("B = %d",b);
    printf("A = %d",a);
}
void zad14 ()
{
    int num;
    printf("Vuvedi chislo: ");
    scanf("%d", &num);
    printf("ASCII value of %d = %c",num,num);
}
