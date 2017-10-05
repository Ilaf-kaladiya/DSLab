/* Description : Implementation of Quick Sort
 *Learner : IALF-KALADIYA
 *Created on :  14th september 2017 
 */




#include<stdio.h>
#define MAX 100



int split(int arr[],int lower,int upper)
{
	int pivot = lower,temp;
	int a = pivot+1,b = upper;
	
	while(b>=a)
	{
		while(arr[a] < arr[pivot])
			a++;
		while(arr[b] > arr[pivot])
			b--;
			
		if(b>a)
		{
			temp = arr[a];
			arr[a] = arr[b];
			arr[b] = temp;
		}
	}
	temp = arr[b];
	arr[b] = arr[pivot];
	arr[pivot]=temp;
	

	return b;
}

void Quick_sort(int arr[],int lower,int upper)
{
	int i;
	if(upper>lower){
	i = split(arr,lower,upper);
	Quick_sort(arr,lower,i-1);
	Quick_sort(arr,i+1,upper);
	}
}

int main()
{ 
	int a[MAX],n,i;
	
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
	printf("Entered array is:\n");

	for(i=0;i<n;i++)
	{
		
		printf("%d\t",a[i]);
	}
	printf("\n\n\n");
	Quick_sort(a,0,n-1);
	printf("Sorted array is:\n");

	
	for(i=0;i<n;i++){
		
		printf("%d\t",a[i]);
		}
	}	
	return 0;
}
