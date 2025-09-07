/*---PASTA---*/
// Triplet to Original Matrix Conversion in C
#include<stdio.h>
int main()
{
	int i,j,nzero, tri[20][20], mat[20][20], k=1;
	printf("Enter the value of Non zero elements:");
	scanf("%d",&nzero);
	printf("Enter the elements of the Triplet:\n");
	for(i=0; i<nzero+1; i++)
	{
		for(j=0; j<3; j++)
			scanf("%d",&tri[i][j]);
	}

	int r = tri[0][0];
	int c = tri[0][1];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			mat[i][j] = 0;
	}

	for(i=1; i<tri[0][2]+1; i++)
	{
		int row = tri[i][0];
		int col = tri[i][1];
		mat[row][col] = tri[i][2];
	}

	printf("Original Matrix is:\n");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			printf("%d\t",mat[i][j]);
		printf("\n");
	}
	return 0;
}
