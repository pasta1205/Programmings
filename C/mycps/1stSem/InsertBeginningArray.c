#include<stdio.h>
int main()
{
	int n,i,j,ele;
	int arr[100];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	printf("Enter the element you want to insert:");
	scanf("%d",&ele);

	for(i=n-1;  i>=0; i--)
		arr[i+1] = arr[i];

	arr[0] = ele;

	printf("Array after inserting Element at the Beginning:\n");
	for(j=0; j<n+1; j++)
		printf("%d\t",arr[j]);

	printf("\n");
}
