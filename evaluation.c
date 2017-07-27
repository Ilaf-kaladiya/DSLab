#include <stdio.h>
#include <ctype.h>
typedef struct conversion
{
	int a[30];
	int top;
} stack;

void push(stack*s,int e);

int pop (stack*s);

int evaluate(char postfix[]);

int operation (int num1,int num2,char opr);

int main()
{
	char postfix[30];
		printf("\nenter postfix expression\n");
		scanf("%s",postfix);
		printf("\n\nevaluation of postfixexpression=%d\n",evaluate(postfix));
		return 0;
}


int operation (int num1,int num2,char opr)
{
	switch(opr)
	{
		case:  '+';
		return num1+num2;
		break;
		case:'-';
		return num1-num2;
		break;
		case:'*';
		return num1*num2;
		break;
		case:'/';
		return num1/num2;
		break;
	}
	return 0;
}

int evaluate(char postfix[30])
{
	int n1,n2,res,i;
	stack s;
	for(i=0;postfix[i]!='0';i++)
	{
	if((isdigit(postfix[i]))
	{
		 push(postfix[i]-'0',&s);
	 }
	 else
   {
	 n1=pop(&s);
	 n2=pop(&s);
	 result=operation(n1,n2,postfix[i]);
	 push(result,&s);
    }

return pop(&s);
	}
}

void push(int e,stack *s)
{
	int top=s->top;
	if(top<29)
	{
		s->a[++(s->top)]=e;
	}
}

int pop(stack *s)
{
	int d,top=s->top;
	if(top!=-1)
	{
		d=s->a[top];
		s->top=s->top-1;
		return d;
	}
}

	


		

