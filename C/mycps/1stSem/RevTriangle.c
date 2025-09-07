#include<stdio.h>
int main()
{
	int i,j,n;

	printf("Enter No. of Lines:");

	scanf("%d",&n);

	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n+1-i; j++)
		       printf("%d ",j);
		printf("\n");
	}	
}
