#include<stdio.h>
int main()
{
	int n,i,j,k, arr[100];
	printf("Enter the size of Array:");
	scanf("%d",&n);

	printf("Enter the elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	for(j=0; j<n; j++)
	{
			int temp = arr[n-j-1];
			arr[n-j-1] = arr[j];
			arr[j] = temp;
	}

	for(k=0; k<n; k++)
		printf("%d\t",arr[k]);

	printf("\n");
}
