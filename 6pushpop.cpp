//Write a program to implement a stack using array

#include<stdio.h>
#include<conio.h>
#define SIZE 10
void push(int);
void pop();
void dispaly();

int stack[SIZE], top=-1;
main(){
	int value, choice;
	while(1){
		printf("\n \n *****MENU***** \n \n");
		printf("1.Push \n 2.Pop \n 3.Dispaly \n 4.Exit");
		printf("\n Enter your choice: \n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Enter the value to be inserted: ");
				scanf("%d", &value);
				push(value);
				break;
			
			case 2:
				pop();
				break;
				
			case 3:
				void display();
				break;
				
			default:
				printf("\n	Wrong selection!!! Try again **!");
		}
	}
}
void push(int value)
{
	if(top==SIZE-1)
		printf("\n Stack is full!!!! Insertion is not possible.");
	else
	{
		top++;
		stack[top]=value;
		printf("\n Insertion Success");
	}
}
void pop()
{
	if(top == -1)
		printf("\n Stack is empty! Deletion is not possible. ");
	else{
		printf("\n Deleted:%d", stack[top]);
		top--;
	}
		
}
void display()
{
	if(top==-1)
		printf("\n Stack is empty.");
	else{
		int i;
		printf("\n Stack elements are:  \n");
		for(i=top; i>=0; i--){
			printf("%d \n", stack[i]);
		}
	}
}
