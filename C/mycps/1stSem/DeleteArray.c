#include<stdio.h>
int main()
{
	int n,i,j,pos;
	int arr[100];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	printf("Enter the Position at which, You want to delete the element:");
	scanf("%d",&pos);
	for(i=pos-1;  i<n; i++)		
		arr[i] = arr[i+1];

	for(j=0; j<n-1; j++)
		printf("%d\t",arr[j]);

	printf("\n");
}
