/*---PASTA---*/
// Linear Search Implementation in C
#include<stdio.h>
int linear(int[],int,int);
int main()
{
	int arr[10],i,n,key,pos;
	printf("Enter the size of the Array:");
	scanf("%d",&n);
	printf("Enter the elements of the Array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the element that you want to search for:");
	scanf("%d",&key);
	linear(arr,n,key);
	if(pos==-1)
		printf("Element is not found.");
	else
		printf("The elements %d is found.",key);
}
int linear(int a[],int n,int key)
{
	int i;
	extern int pos;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
			return 0;
	}
	return -1;
}
