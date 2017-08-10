#include<stdio.h>

#define MAXSIZE 10



int queue[MAXSIZE], front=-1, rear=-1;
int isFull(){
	//return 1 if stack is full else returns -1	
	if(rear==MAXSIZE-1)
	return 1;
	else 
	return 0;

}

int isEmpty(){
	//return 1 if stack is empty else returns-1
	if(rear==-1&&rear==-1)
	return 1;
	else
	return 0;

}

int peek(){
	//return elements at the top of stack
	return queue[front];
}

void insertQueue(int e)
{
	if(!isFull())
	{
		if(isEmpty())
		{
			front++;
		}
		queue[++rear]=e;
		printf("your element is successfully inserted\n");
	}
	else
	{
		printf("Queue is full \n element cannot be inserted");
	}
	
	
	}
void deleteQueue()
{
	if(!isEmpty())
	{
		int d=queue[front];
		if(front==rear)
		{
			front=rear=-1;
        }
		else
		{
			front++;
		}
		printf("element deleted id %d\n",d);
	}
	}



int main(){
	int choice,e;
	do 
	{
		printf("display menu\n1.peek\n2.insert\n3.delete\n4.exit\n");
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			
			printf("element at frontof queue  %d",peek());
			
				break;
			case 2:
			printf("enter element to be inserted ");
			scanf("%d",&e);
			insertQueue(e);
				break;
			case 3:deleteQueue();
			break;
			case 4:return 0;
		} 
		
	} while(1);
	return 0;
}
		


