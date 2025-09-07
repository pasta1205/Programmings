#include<stdio.h>
int ArraySum(int arr[], int s)
{
	int i, sum = 0;
	for(i=0; i<s; i++)
		sum += arr[i];

	return sum;
}

int main()
{
	int m,i,arr[100];
	printf("Enter the No. of Elements of The Array:");
	scanf("%d",&m);

	printf("Enter the Elements of The Array:\n");
	for(i=0; i<m; i++)
		scanf("%d",&arr[i]);

	int add = ArraySum(arr,m);

	printf("Sum of The Array Elements:%d\n",add);
}
