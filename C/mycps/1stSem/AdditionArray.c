#include<stdio.h>
int main()
{
	int n,i,j,k;
	int arr1[30],arr2[30],arr3[30];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array 1:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr1[i]);

	printf("Enter the Elements of the Array 2:\n");
	for(j=0; j<n; j++)
		scanf("%d",&arr2[j]);

	printf("Added Array:\n");
	for(k=0; k<n; k++)
	{
		arr3[k] = arr1[k] + arr2[k];
		printf("%d ",arr3[k]);
	}
	printf("\n");
}