#include<stdio.h>
void triplet(int arr[][10], int spm[][10], int r, int c)
{
	int i,j,l,s;
	int k=1;
	int m=0;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(arr[i][j] != 0)
			{
				spm[k][0] = i;
				spm[k][1] = j;
				spm[k][2] = arr[i][j];
				k++; 
				m++;
			}
		}
	}
	spm[0][0] = r;
	spm[0][1] = j;
	spm[0][2] = m;

	for(l=0; l<m+1; l++)
	{
		for(s=0; s<3; s++)
			printf("%d\t",spm[l][s]);

		printf("\n");
	}
}
int main()
{
	int i,j,r,c, arr[10][10], spm[10][10];
	printf("Enter the Row No. of the Matrix:");
	scanf("%d",&r);
	printf("Enter the Col. No. of the Matrix:");
	scanf("%d",&c);
	printf("Enter the Elements of the Matrix:\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			scanf("%d", &arr[i][j]);
	}
	triplet(arr,spm,r,c);
	return 0;
}