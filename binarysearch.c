/* Description : Implementation of Binary Search 
 *Learner : IALF-KALADIYA
 *Created on :  14th september 2017 
 */


#include<stdio.h>

#define MAX 100

int binary_search(int a[],int n,int x)
{
	int mid = n/2;
	int high = n-1,low=0;
	
	while(high>=low)
	{
		if(a[mid]==x)
			return mid;
			if(x>a[mid])
				low = mid+1;
			else
				high = mid-1;
				
		mid = (low+high)/2;
	}
	return -1;
			
}

int main()
{ 
	int a[MAX],n,x,c,i;
	
	printf("\nEnter the number of elements for array.\n");
	scanf("%d",&n);
	if(n>100)
	printf("SORRY.\nNumber of elements should be less than 100\n");
	else {
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	}
	printf("ENTER ELEMENT TO BE SEARCHED\n");
	scanf("%d",&x);
	c = binary_search(a,n,x);
	if(c==-1){
	printf("ELEMENT CANNOT BE FOUND\n");
	}
	else
	printf("Element found at position : %d\n ",c);
	
	return 0;
	
}
