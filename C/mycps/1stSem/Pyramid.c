#include<stdio.h>
int main()
{
	int n,i,j,m,k;

	printf("Enter the No. of Rows:");

	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		for (j=1; j<i; j++)
			printf(" ");

		for (k=1; k<=n*2-(2*i-1); k++)
			printf("*");
		printf("\n");
	}
}
