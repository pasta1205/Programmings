#include<stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j,k,mat1[100][100],mat2[100][100],mat3[100][100];
	printf("Enter the No. of Rows of Matrix 1:");
	scanf("%d",&r1);
	printf("Enter the No. of Columns Matrix 1:");
	scanf("%d",&c1);

	printf("Enter the Elements of The Matrix 1:\n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
			scanf("%d",&mat1[i][j]);
	}

	printf("Enter the No. of Rows of Matrix 2:");
	scanf("%d",&r2);
	printf("Enter the No. of Columns Matrix 2:");
	scanf("%d",&c2);

	printf("Enter the Elements of The Matrix 2:\n");
	for(i=0; i<r2; i++)
	{       
		for(j=0; j<c2; j++)
			scanf("%d",&mat2[i][j]);      
	}

	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			for(k=0; k<c1; k++)
			mat3[i][j] += mat1[i][k] * mat2[k][j];
		}
	}

	printf("Multiplied Matrix:\n:");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
			printf("%d\t",mat3[i][j]);
		printf("\n");
	}
	printf("\n");
}
