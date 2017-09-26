/*Description:Evaluation of postfix expression
 *Learner:ILAF KALADIYA
 *created on: 27th JULY 2017
*/


#include <stdio.h>
#include <ctype.h>


typedef struct evaluation
{
	char a[30];
	int top;
} stack;

void push(stack *ps,char n);

int pop (stack *ps);

int evaluate(char postfix[]);

int operation (int num1,int num2,char opr);

int main()
{
	char postfix[30];
	
	printf("\nEnter Postfix Expression\n");
	scanf("%s",postfix);
	printf("\n\nEvaluation of Postfix Expression=%d\n",evaluate(postfix));
	return 0;
}


int operation (int n1,int n2,char opr)
{
	
	
	switch(opr)
	{
		case  '+':
		return n1+n2;
		break;
		case '-':
		return n1-n2;
		break;
		case '*':
		return n1*n2;
		break;
		case '/':
		return n1/n2;
		break;
	}
	
}

int evaluate(char postfix[30])
{
	int opr;
	int n1,n2,result,i;
	stack s;
	s.top=-1;
	while(postfix[i]!='\0')
	{
		opr=postfix[i];
		if(isdigit(opr))
		push(&s,opr-'0');
		else
		{
		n1=pop(&s);
		n2=pop(&s);
	    result=operation(n1,n2,opr);
	    push(&s,result);
	    }
	    i++;
	}
		return pop(&s);
	}


void push(stack *ps,char n)
{
	
	if(ps->top>29){
		printf("\nStack is full.\n");
		return;
	}
	ps->top++;
	ps->a[ps->top]=n;
}

int pop(stack *ps)
{
	if(ps->top==-1)
	{
		printf("\nStack is empty\n");
		return 0;
	}
	else
	{
		char data=ps->a[ps->top--];
		return data;
	}
}

	


		

