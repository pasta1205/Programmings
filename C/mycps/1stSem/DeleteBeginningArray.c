#include<stdio.h>
int main()
{
	int n,i,j,ele,pos;
	int arr[100];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	for(i=0;  i<n; i++)		
		arr[i] = arr[i+1];

	printf("Array after Deletion at The Beginning:\n");
	for(j=0; j<n-1; j++)
		printf("%d\t",arr[j]);

	printf("\n");
}
