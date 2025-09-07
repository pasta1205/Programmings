#include<stdio.h>
int main()
{
	int n,i,j,arr[100];
	printf("Enter the No. of Elements:");
	scanf("%d",&n);

	printf("Enter the Elements of The Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	for(j=0; j<n; j = j+2)
	{
		int temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
	}

	printf("Array after Swapping the positions:\n");
	for(i=0; i<n; i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
