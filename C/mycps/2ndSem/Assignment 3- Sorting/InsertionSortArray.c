/*---PASTA---*/
// Insertion Sort Implementation in C
#include<stdio.h>
void input(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
}

void InsertSort(int arr[], int n)
{
	int i,j, key;
	for(j=1; j<n; j++)
	{
		key = arr[j];
		i = j-1;
		while( i>-1 && arr[i] > key)
		{
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1] = key;
	}
}

void display( int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d\t", arr[i]);
}

int main()
{
	int i,n,arr[20];
	printf("Enter the No. of elements:");
	scanf("%d",&n);
	printf("Enter the Elements of the Array:\n");
	input(arr,n);
	InsertSort(arr,n);
	printf("Sorted matrix:\n");
	display(arr,n);

	return 0;
}
