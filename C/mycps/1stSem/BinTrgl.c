#include<stdio.h>
int main()
{
	int a,n,i,j;

	printf("Enter the No. of Lines:");

	scanf("%d",&n);

	for (i=1; i<=n; i++)
	{
		if(i%2==0)
			a=0;
		else
			a=1;
		for (j=1; j<=i; j++)
			printf("%d ",a);

		printf("\n");
	}
}
