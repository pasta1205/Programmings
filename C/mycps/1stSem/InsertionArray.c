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

	printf("Enter the element you want to insert:");
	scanf("%d",&ele);

	printf("Enter the Position at which, You want to insert the element:");
	scanf("%d",&pos);
	for(i=n;  i>=pos-1; i--)
		arr[i+1] = arr[i];

	arr[pos-1] = ele;

	for(j=0; j<n+1; j++)
		printf("%d\t",arr[j]);

	printf("\n");
}
