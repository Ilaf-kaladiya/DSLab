/* Description : Implementation of hashing
 *Learner : IALF-KALADIYA
 *Created on :  5th October 2017 
 */

#include<stdio.h>
#include<math.h>

#define MAX 10


int hash(int k)
{
	return (k%MAX);
}

int linear_probe(int h)
{
	return ++h % MAX;
}

int quadratic_probe(int h,int i)
{
	return (int)(h+pow(i,2))%MAX;
}

int double_hash(int h,int i)
{
	return (h+i*linear_probe(h))%MAX;
}

void display(int a[])
{
	int i;
	printf("\nElements of array\n");
	for(i=0;i<=MAX;i++)
		printf("%d\t",a[i]);
}

int main()
{
	int a[MAX],i,h,e,count,choice;
	for(i=0;i<=MAX;i++)
		a[i]=-1;
		
	do
	{
		count=0;
		printf("\n Enter the Number to be stored: ");
		scanf("%d",&e);
		h=hash(e);
		if(a[h]==-1){
			a[h]=e;
			display(a);
		}
		else
		{
		
			while(count<MAX){
				count++;
				printf("\nCollision occured at %d\n",h);
				printf("\n Pease enter your choice for resolution\n");
				printf("\n1.LINEAR PROBING\n2.QUADRATIC PROBING\n3.DOUBLE HASHING\n");
				scanf("%d",&choice);
				
				switch(choice){
						case 1:
							h=linear_probe(h);
							break;
						case 2:
							h=quadratic_probe(h,count);
							break;
						case 3:
							h=double_hash(h,count);
							break;
						default :
							printf("\n Invalid choice\n");
							count--;
							break;
						}
						
				if(a[h]==-1)
				{
					a[h]=e;
					display(a);
					break;
				}
			}	
		}
		if(count==MAX)
		{
			printf("\n Array is FULL\nor\nCollision Resolution not successfull");
			return 0;
		}
	}while(1);	
}
