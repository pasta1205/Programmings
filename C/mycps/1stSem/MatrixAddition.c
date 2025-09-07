#include<stdio.h>
int main()
{
	int m,n,i,j,mat1[100][100],mat2[100][100],mat3[100][100];
	printf("Enter the No. of Rows:");
	scanf("%d",&m);
	printf("Enter the No. of Columns:");
	scanf("%d",&n);

	printf("Enter the Elements of The Matrix 1:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			scanf("%d",&mat1[i][j]);
	}

	printf("Enter the Elements of The Matrix 2:\n");
	for(i=0; i<m; i++)
	{       
		for(j=0; j<n; j++)
			scanf("%d",&mat2[i][j]);      
	}

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			mat3[i][j] = mat1[i][j] + mat2[i][j];
	}

	printf("Added Matrix:\n:");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			printf("%d\t",mat3[i][j]);
		printf("\n");
	}
	printf("\n");
}
