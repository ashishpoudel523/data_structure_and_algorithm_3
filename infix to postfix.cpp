#include<stdio.h>
#include<ctype.h>
#define size 50
char s[size];
int top=-1;
push(char elem)
{
	s[++top]=elem;
	return 0;
}
char pop()
{
	return(s[top--]);
}
int pr(char elem)
{
	switch(elem)
{
	case'#':return 0;
	case'(':return 1;
	case'+':;
	case'-':return 2;
	case'*':;
	case'/':return 3;
}
return 0;
}
main()
{
	char infx[50],prefix[50],ch,elem;
	int i=0,k=0;
	printf("\n\n enter infix expression");
	scanf("%s",infx);
	push('#');
	while((ch=infx[i++])!='\0')
	{
		if(ch=='(')
		push(ch);
	else
	if(isalnum(ch)) prefix[k++]=ch;
	else
	if(ch==')')
	{
		while(s[top]!='(')
		prefix[k++]=pop();
		elem=pop();
	}
	else{
		while(pr(s[top])>=pr(ch))
		prefix[k++]=pop();
		push(ch);
	}
	}
	while(s[top]!='#')
	prefix[k++]=pop();
	prefix[k]='\0';
	printf("\n\ngiven infix expression:%s\n prefix expression:%s\n",infx,prefix);
}
