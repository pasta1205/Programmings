#include<stdio.h>
int main()
{
	int m,n,i,j,mat[100][100],sum=0;

	printf("Enter the No. of Rows:");
	scanf("%d",&m);
	printf("Enter the No. of Columns:");
	scanf("%d",&n);

	printf("Enter The Elements of The Matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			scanf("%d",&mat[i][j]);
	}

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
				sum += mat[i][i];
		}
	}
	printf("Trace of the Matrix:%d\n",sum);
}
