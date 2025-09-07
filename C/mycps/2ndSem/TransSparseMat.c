#include<stdio.h>
void Transpose(int tri[20][20], int trans[20][20])
{
	int i,j,temp = 1, l, s, r,c, nzero;

	r = tri[0][0];
	c = tri[0][1];
	nzero = tri[0][2];

	trans[0][0] = c;
	trans[0][1] = r;
	trans[0][2] = tri[0][2];

	for(j=0; j<c; j++)
	{
		for(i=1; i<nzero+1; i++)
		{
			if(tri[i][1] == j)
			{
				trans[temp][0] = j;
				trans[temp][1] = tri[i][0];
				trans[temp][2] = tri[i][2];
				temp++;
			}
		}
	}

	printf("Transpose of the Sparse Matrix is:\n");
	for(l=0; l< nzero+1; l++)
	{
		for(s=0; s<3; s++)
			printf("%d\t",trans[l][s]);
		printf("\n");
	}
}

int main()
{
	int tri[20][20], trans[20][20], i, j, nzero;
	printf("Enter the No. of Non zero elements:");
	scanf("%d",&nzero);
	printf("Enter the elements of the Triplet:\n");
	for(i=0; i<nzero+1; i++)
	{
		for(j=0; j<3; j++)
			scanf("%d",&tri[i][j]);
	}
	Transpose(tri, trans);
	return 0;
}
