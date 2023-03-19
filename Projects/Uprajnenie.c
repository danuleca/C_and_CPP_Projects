#include <stdio.h>
int n_faktoriel_bez_rekursiq(int n);
int n_faktoriel_sus_rekursiq(int n);
int nto_chislo_na_fabonacci_bez_rekursiq(int n);
float stepen1(float,int);
float stepen2(float,int);
int main(void)
{

    int n;
    scanf("%d",&n);
    printf("\n%d",n_faktoriel_bez_rekursiq(n));
    printf("\n%d",n_faktoriel_sus_rekursiq(n));

    return 0;
}


int n_faktoriel_bez_rekursiq (int n)
{
    int i,p=1;
    for(i=1; i<=n; i++)p=p*i;
    return p;
}



int n_faktoriel_sus_rekursiq(int n)
{
    if(n==0)return 1;
    else return n*n_faktoriel_sus_rekursiq(n-1);
}
int nto_chislo_na_fabonacci_bez_rekursiq(int n)
{
    int fib1=1,fib2=1,k;
    int br;

    for (br = 1; br <= n-1; ++br)
    {
        k=fib1+fib2;
        fib1=fib2;
        fib2=k;
    }
    return fib1;
}
int nto_chislo_na_fabonacci_sus_rekursiq(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return(nto_chislo_na_fabonacci_sus_rekursiq(n - 1) + nto_chislo_na_fabonacci_sus_rekursiq(n - 2));
    }
}
int simvoli_v_obraten_red ()
{
    printf("Enter a sentence: ");
    simvoli_v_obraten_red_funk();
    return 0;
}
int simvoli_v_obraten_red_funk()
{
    char c;
    scanf("%c", &c);
    if (c != '.')
    {
        simvoli_v_obraten_red_funk();
        printf("%c", c);
    }
}
int edno_do_n_bez_rekursiq ()
{
    int i, n, sum=0;

    printf("N: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sbor = %d", sum);

    return 0;
}
int edno_do_n_s_rekursiq (int n2)
{
    int sum2;
    printf("N:");
    if (n2 == 1)
    {
        return 1;
    }
    else
    {
        sum2=n2+edno_do_n_s_rekursiq(n2 - 1);
    }
    return sum2;
}
float stepen1(float a, int n)
{
    float p=1;
    int i,m;
    if(n<0)m=-n;
    else m=n;
    for(i=1; i<=m; i++)p*=a;
    if(n<0)return 1/p;
    else return p;
}


float stepen2(float a, int n)
{
    if(n==0)return 1;
    else if(n>0)return a*stepen2(a,n-1);
    else return 1/a*stepen2(a,n+1);
}

void bin(int n)
{
    if(n>0)
    {
        bin(n/2);
        printf("%d",n%2);
    }
}
int inttobinary (int number)
{
    scanf("%d",&number);
    char BinaryFound=0;
    for (int i; i>=0; i--)
    {
        int mask = 1 << i;
        int result = number & mask;
        {
        if (result){
            printf("1");
            BinaryFound = 1;
        }
        else if(BinaryFound) printf("0");
        }
    }
}
