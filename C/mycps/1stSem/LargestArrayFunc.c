#include<stdio.h>
int ArrayLargest(int arr[],int s)
{
	int i;

	int large= arr[0];
	for(i=0; i<s; i++)
	{
		if(arr[i]>large)
			large=arr[i];
	}

	return large;
}

int main()
{
	int n,i,arr[100];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	int largest = ArrayLargest(arr,n);

	printf("The Largest Element of The Array is:%d\n",largest);
}
