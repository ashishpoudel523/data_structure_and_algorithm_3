//Write a program to calculate TOWER OF HANOI

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void hanoi(int num, char a, char b, char c)
{
	if(num==1)
	{
		printf("Move the top disk from a %c to b %c \n, a, b");
		return;
	}
	hanoi(num-1, c, b, a);
}
int main(){
	int n1;
	printf("Enter the number of disks to be transferred: \n \n");
	scanf("%d", &n1);
	if(n1<1)
	{
		printf("There is nothing to move. \n");
	}
	else{
		printf("\n Recursive: \n");
	}
	getch();
	return 0;
}
