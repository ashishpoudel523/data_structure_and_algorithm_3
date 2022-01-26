//Write a program to convert infix expression to postfix.

#include<stdio.h>
#include<ctype.h>
#define size 50

char s[size];
int top =-1;
push(char clr)
{
	s[++top]=clr;
	return 0;
}
char pop()
{
	return(s[top--]);
}
int pr(char clr)
{
	switch(clr)
	{
		case '#': return 0;
		case '(': return 1;
		case '+': 
		case '-': return 2;
		case '*': 
		case '/': return 3;
	}
	return 0;
}
main()
{
	char infix[50], prefix[50], ch, clr;
	int i=0, k=0;
	printf("\n Enter infix expression: ");
	scanf("%s",infix );
	push('#');
	while((ch=infix[i++])!='\0')
	{
		if(ch=='(')
			push(ch);
		else if(isanum()) prefix[k++]=ch;
		else if(ch=='(')
		{
			while(s[top]!='(')
			prefix[k++]=pop();
			elem=pop();	
		}
		else{
			while(pr(s[top])>=pr(ch))
				prefix[k++]=pop;
				push(ch);
		}
	}
	while(s[top]!='#')
		postfix[k++]=pop();
		postfix[k]='\0';
		printf("\n \n Given infix expression: %s \n \n  Postfix expression: %s \n \n", infix, prefix);
		
}

