#include<stdio.h>
int main()
{
	int n,i,mid,s,f=0, l;
	int arr[30];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	
	printf("Enter the Element to Search:");
	scanf("%d",&s);
	l = n - 1;
	while(f<=l)
	{
		mid= (f+l)/2;
		if(s == arr[mid])
		{
			printf("Element found at %d position.\n",mid+1);
			break;
		}

		else if(s < arr[mid])
			l= mid - 1;
		else if(s > arr[mid])
			f= mid + 1;
	}
	if(f > l)
		printf("Match Not Found!!\n");
}
