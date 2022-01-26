/*Write a program to calculate the factorial value using recursive 
function.*/

#include<stdio.h>
#include<conio.h>
main()
{
	long int  fac, n;
	long int factorial(long int x);
	
	printf("Enter any number:");
	scanf("%ld", &n);
	
	fac = factorial(n);
	printf("Factorial = %ld", fac);
	getch();
}
long int factorial(long int x)
{
	long f;
	if(x==1 || x==0)
		return 1;
	else
		f = x*factorial(x-1);
		
		return f;
}
