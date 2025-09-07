/*---PASTA---*/
// Binary Search Implementation in C
#include <stdio.h>
#include <math.h>
int bsi(int n,int arr[20]);
int main()
{
	int i,j,n,arr[100];
	printf("Enter size of the Array:");
	scanf("%d",&n);
	printf("Enter Elements of the Array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	int d=bsi(n,arr);
	printf("Element found at: %d\n",d);
	return 0;
}
int bsi(int n,int arr[20])
{
	int l=0,u=n-1;
	int x,mid;
	printf("Enter Element to Search:");
	scanf("%d",&x);
	while(l<=u)
	{
		mid=((l+u)/2);
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]<x)
			l=mid+1;
		else
			u=mid-1;
	}
	return mid;
}
