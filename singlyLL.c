#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list{
	int data;
	struct linked_list *next;
}node;

void print(node *q)
{
	node *ptr;
	ptr=q;
	printf("\n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}

void insbeg(node **q,int no)
{
	node *temp,*ptr;
	temp=*q;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=no;
	if(temp==NULL)
		ptr->next=NULL;
	else
		ptr->next=temp;
	*q=ptr;
	printf("\n ELEMENTS OF LINKED LIST AFTER INSERTION\n");
	print(*q);
}

void insend(node **q,int no)
{
	node *ptr,*temp;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=no;
	ptr->next=NULL;
	temp=*q;
	if(temp==NULL)
		*q=ptr;
	else
	{
		while(temp->next!=NULL)
			temp=temp->next;
			temp->next=ptr;
		}
	printf("\n ELEMENTS OF LINKED LIST AFTER INSERTION\n");
	print(*q);
		
}

void insafter(node *q,int no)
{
	int loc,k;
	node *temp,*old,*ptr;
	temp=q;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=no;
	print("\n	ENT5ER LOCATION WHERE THE NO. IS TO BE INSERTED");
	scanf("%d",loc);
	for(k=1;k<loc;k++)
	{
		if(temp==NULL)
			printf("\nELEMENTS ARE LESS THAN PROVIDED LOCATION");
		else
		{
			old=temp;
			temp=temp->next;
		}	
	
}
	ptr->next=temp;
	old->next=ptr;
	
	printf("\n ELEMENTS OF LINKED LIST AFTER INSERTION\n");
	print(q);
	


}

void del(node **q,int no)
{
	int f=0;
	node *old,*temp;
	temp=*q;
	
	while(temp!=NULL)
	{
		if(temp->data==no)
		{
			f=1;
			if(temp==*q)
				*q=temp->next;
			else
				old->next=temp->next;
				free(temp);
				break;
		}
		else
		{
			old=temp;
			temp=temp->next;
			
		}
	}
	if(f==0)
	printf("\nTHE GIVEN NUMBER IS NOT FOUND");
	
	printf("\n ELEMENTS OF LINKED LIST AFTER DELETION\n");
	print(*q);
}

void traverse(node *q)
{
	printf("\nTRAVERSING LINKLIST\n");
	print(q);
	printf("\nEND OF LINKLIST\n");
	
}


int main()
{
	node *start,*ptr,*temp;
	int i,n,j,no,c;
	printf("\nENTER NO OF NODES\n");
	scanf("%d"&n);
	printf("\nENTER NODE NUMBER 1:\n");
	start=(node*)malloc(sizeof(node));
	scanf("%d",&start->data);
	temp=start;
	
	for(i=1;i<n;i++)
	{
		ptr=(node*)malloc(sizeof(node));
		printf("ENTER NODE NUMBER %d",i+1);
		
	}
}



