#include<stdio.h>
#include<ctype.h> //for isalpha() function

typedef struct conversion
{
	char a[30];
	int top;
}stack;

void push(stack*,char);
char pop(stack*);
void convert(char[],char[]);
int priority(char);

int main()
{
	char infix{30],postfix[30];
		printf("\nenter infix expression\n");
		scanf("%s",infix);
		convert(infix,postfix);
		printf("\n\npostfixexpression\n%s",postfix);
		return 0;
}
void convert(char in[],charpost[])
{
	char opr;
	stack s1;
	int j=0,i;
	s1.top=-1;
	for(i=0;in[i]!='\0';i++)
	{
		if(isalpha(in[i]))
		post[j++]=in[i];
		if(in[i]=='(')
		push(&s1,in[i]);
		if(in[i]=='+'||in[i]=='-'||in[i]=='/'||in[i]=='*')	
{
	if(s1.top!=-1)
	{
		opr=pop(&s1);
		while(priority(opr)>=priority(in[i]))
		{
			post[j++]=opr;
			opr=pop(&s1);
		}
		push(&s1,opr);
		push(&s1,in[i]);
	}
	else 
	push(&s1,in[i]);
}
if(in[i]==')')
{
	opr=pop(&s1);
	while(opr!='(')
	{
		post[j++]=opr;
		opr=pop();
	}
}
while(s.top!=-1)
post[j++]=pop();
post[j]='\0';
}
}
		