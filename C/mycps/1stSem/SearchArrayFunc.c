#include<stdio.h>
int ArraySearch(int arr[], int n, int s)
{
	int i;

	for(i=0; i<n; i++)
	{
		if(arr[i] == s)
			return 1;
	}
	return 0;
}

int main()
{

	int n,i,s,arr[100];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	
	printf("Enter the Element to Search:");
	scanf("%d",&s);

	int search = ArraySearch(arr,n,s);

	if(search == 1)
		printf("Element found!!\n");
	else
		printf("Element not found!!\n");
}
