//Write a program to calculate the GCD of given number using recursive function.

#include<stdio.h>
int gcd(int a, int b);  //Function declaration
int main()
{
	int n1, n2, hcf;
	printf("Enter any two numbers to find GCD: \n");
	scanf("%d %d", &n1, &n2);
	hcf = gcd(n1, n2);
	printf("GCD of %d and %d = %d", n1, n2, hcf);
	return 0;
}
int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}
