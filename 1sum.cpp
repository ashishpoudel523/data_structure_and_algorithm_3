//Write a program to calculate sum of natural number using recursion
#include<stdio.h>
int sum(int n);
int main(){
	int number, result;
	printf("Enter a positive number:");
	scanf("%d", &number);
	result = sum(number);
	printf("The sum = %d", result);
	return 0;
}
int sum(int num){
	if(num != 0)
		return num + sum(num-1);
	else
		return num;
}
