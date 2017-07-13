#include<stdio.h>
#include<std
#define MAXSIZE 10

int stack[MAXSIZE], top=-1;
int isFull(){
	//return 1 if stack is full else returns -1	
	if(top==MAXSIZE-1)
	return 1;
	else 
	return -1;

}

int isEmpty(){
	//return 1 if stack is empty else returns-1
	if(top==-1)
	return 1;
	else
	return -1;

}

int peek(){
	//return elements at the top of stack
	return stack[top];
}

void push(int e){
	//inserts an element into stack
	if(isFull()!=1)
	{e=stack[++top];
	printf("element e successfully inserted");}
	else {
	printf("stack overflow");
}

}

void pop(){
	//deletes an elementfrom the stack
	int d;
	if (isEmpty()!=1)
	{
		d=stack[--top];
		printf("elements d sucessfully deleted");
	}
	else{
	printf("stack underflow");
}
}
int main(){
	int chioce,e;
	do 
	{
		printf("display menu 1.peek 2.push 3.pop 4.exit");
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice){
		}
		


