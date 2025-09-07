#include<stdio.h>
int main()
{
	int n,i,j;
	int arr[30];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	int largest= arr[0] , SecLargest;
	for(j=0; j<n; j++)
	{
		if(arr[j]>largest)
		{
			SecLargest = largest;
			largest = arr[j];
		}	
	}
	int k, smallest= arr[0], SecSmallest;
	for(k=0; k<n; k++)
	{
		if(arr[k]<smallest)
		{
			SecSmallest = smallest;
			smallest = arr[k];
		}
	}
	printf("Second Smallest Element in the Array is:%d\n",SecSmallest);
	printf("Second Largest Element in the Array is:%d\n",SecLargest);
}
