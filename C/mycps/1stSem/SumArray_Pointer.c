#include<stdio.h>
int main()
{
	int n,i,sum=0;
	int arr[30], *ptr;
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	ptr = arr;

	for(i=0; i<n; i++)
		sum += *(ptr+i);

	printf("Sum of the Array Elements: %d\n",sum);
}
