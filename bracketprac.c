#include <stdio.h>
#include <ctype.h>
#deefine MAX 100

typedef struct stack
{
	char a[MAX];
	int top;
}stack;

void push(char,struct stack *s);

char pop (struct stack *s);

void checkcontinuity (char exp[30]);

int isMatchingpair (char left, char right);


int main()
{
	char exp[MAX];
		printf("\nEnter an expression containing only BRACKETS\n");
		scanf("%s",exp);
		checkcontinuity(exp);
		return 0;
}


 void push (char n,struct stack *s)
{
	
	if(s->top!=MAX-1)
	{
		s->a[++(s->top)]=n;
	}
	 else
		 printf("\n Stack is FULL\n");
}

char pop(struct stack *s)
{
	char d;
	int top=s->top;
	if(top!=-1)
	{
		d =s->a[top];
		s->top=s->top-1;
		return d;
	}
}

int isMatchingpair (char left,char right)
{
	switch(left)
	{
		case '(':
			if(right==')')
				return 1;
			else
				return 0;
		case'{':	
			if(right=='}')
				return 1;
			else
				return 0;
		case'[':
			if(right==']')
				return 1;
			else
				return 0;
		default:
			 	return 0;
	}
	
}

void checkcontinuity (char exp[MAX])
{
	int i;
	char e, left;
	stack s;
	s.top=-1;
	
	for(i=0;exp[i]!='\0';i++)
	{
		e=exp[i];
		if(e=='(' ||e=='{'|| e=='[')
		
			push(e,&s);
		
		else
		{
			if(s.top==-1)
			{
				printf("Expression is INVALID\n");
				return;	
			}
				else
				{
			left=pop(&s);
			
			if(isMatchingpair(left,e))
			continue;
			else
			
			{
				printf("\n INVALID Expression\n");
				return;
			}
		}
		}
		}
			
			
			if(s.top==-1)
			{
				printf("\nExpression is INVALID\n");
				return;
			}
				else
			{
				printf("\nVALID Expression\n");
				
			}
}
	


		
