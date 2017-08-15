#include <stdio.h>
#include <ctype.h>
#define MAX 100

typedef struct stack
{
	int a[MAX];
	int top;
} stack;

void push(struct stack *ps,char n);

int pop (struct stack *ps);

int evaluate(char postfix[]);

int operation (int num1,int num2,char opr);

int main()
{
	char postfix[30];
	int result;
	printf("\nEnter Postfix Expression\n");
	scanf("%s",postfix);
	printf("\n\nEvaluation of Postfix Expression=%d\n",evaluate(postfix));
	return 0;
}


int operation (int num1,int num2,char opr)
{
	
	switch(opr)
	{
		case  '+':
		return num1+num2;
		break;
		case '-':
		return num1-num2;
		break;
		case '*':
		return num1*num2;
		break;
		case '/':
		return num1/num2;
		break;
	}
	return 0;
}

int evaluate(char postfix[30])
{
	
	int n1,n2,res,i;
	stack s;
	s.top=-1;
	for(i=0;postfix[i]!='\0';i++)
	{
		if((isdigit(postfix[i]))
	{
		push(postfix[i]-'0',&s);
		printf("\n%c-%c",postfix[i]-'0',postfix[i]);
	 
	
	}
	 else
   	{
	 n2=pop(&s);
	 n1=pop(&s);
	 result=operation(n1,n2,postfix[i]);
	 push(result,&s);
    	}
	}

return pop(&s);
	}


void push(char n,struct stack *ps)
{
	
	if(ps->top!= MAX-1)
	{
		ps->a[++(ps->top)]=n;
	}
	else 
	{ 
		printf("\nStack is FULL\n");
	}
}

int pop(struct stack *s)
{
	int d,top=s->top;
	if(top!=-1)
	{
		d=s->a[top];
		s->top=s->top-1;
		return d;
	}
}

	


		

