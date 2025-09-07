#include<stdio.h>
int main()
{
	int n,i,j;

	printf("Enter the No. of Lines:");

	scanf("%d",&n);

	for (i=1; i<=n; i++)
	{
		char A=65;
		for (j=1; j<=i; j++)
		{
			printf("%c ",A);
			A++;
		}

		printf("\n");
	}
}
