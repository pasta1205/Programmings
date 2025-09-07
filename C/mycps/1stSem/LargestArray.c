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

	int large= arr[0];
	for(j=0; j<n; j++)
	{
		if(arr[j]>large)
			large=arr[j];
	}
	printf("Largest Element in the Array is:%d\n",large);
}
