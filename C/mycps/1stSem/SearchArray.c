#include<stdio.h>
int main()
{
	int n,i,j,s,f=0;
	int arr[30];
	printf("Enter the size of the Array:");
	scanf("%d",&n);

	printf("Enter the Elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	
	printf("Enter the Element to Search:");
	scanf("%d",&s);

	for(j=0; j<n; j++)
	{
		if(arr[j] == s)
		{
			printf("Element found at %d position.\n",j);
			f=1;
		}
	}
	if(f==0)
		printf("Match Not Found!!");
}
