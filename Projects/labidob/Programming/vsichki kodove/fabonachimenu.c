#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int op,Number,n;
do
    {
        printf("\n\n1. n-to chislo na Fabonachi\n2. nai-golqmo chislo na fabonachi, koeto ne e po-golqmo ot dadeno n\n3. Nai-malkoto chislo na fabonachi, koeto ne e po-golqmo ot dadeno n.\n4. Exit");
        scanf("%d",&op);
    }while(n<5);
    switch (op)
    case 1: printf("\nVuvedi n");
            scanf("%d",&Number);
            (Fibonacci_Series(Number)) && (Fibonacci_Series2(Number));
}
int Fibonacci_Series()
{
   	int Number, Fibonacci;

   	printf("\n Please Enter the Number to find Nth Fibonacci Number :  ");
   	scanf("%d", &Number);

   	Fibonacci = Fibonacci_Series(Number);

	printf("\n %d Fibonacci Number = %d", Number, Fibonacci);
    return 0;
}

int Fibonacci_Series2(int Number)
{
   	if ( Number == 0 )
    	return 0;
   	else if ( Number == 1 )
    	return 1;
   	else
    	return ( Fibonacci_Series(Number - 1) + Fibonacci_Series(Number - 2) );
}
