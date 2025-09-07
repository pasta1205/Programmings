#include<stdio.h>
int main()
{
	int n,i,j,k,r,temp;
	int arr[100];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	printf("Enter The No. of Rotations:");
	scanf("%d",&r);

	for(j=0; j<r; j++)
	{
		temp = arr[0];

		for(k=0;  k<n; k++)
			arr[k] = arr[k+1];

		arr[n] = temp;
	}

	printf("Array after %d Rotations:\n",r);
	for(i=0; i<n; i++)
		printf("%d\t",arr[i]);

	printf("\n");
}
