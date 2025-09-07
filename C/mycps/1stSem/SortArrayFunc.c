#include<stdio.h>
void ArraySort(int arr[], int n)
{
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(arr[j]> arr[j+1])
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int n,i,j;
	int arr[30];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	ArraySort(arr,n);
	printf("Sorted Array:\n");
	for(i=0; i<n; i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
