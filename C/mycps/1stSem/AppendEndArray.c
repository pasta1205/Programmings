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

	arr[n] = ele;

	printf("Enter the element you want to insert:");
	scanf("%d",&ele);

	arr[n+1] = ele;

	printf("Array after inserting Element at the End:\n");
	for(j=0; j<n+2; j++)
		printf("%d\t",arr[j]);

	printf("\n");
}
