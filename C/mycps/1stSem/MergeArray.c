#include<stdio.h>
int main()
{
	int n1,n2,i,j,k,l;
	int arr1[30], arr2[30], Merged[60];
	printf("Enter the size of the Array 1:");
	scanf("%d",&n1);

	printf("Enter the Elements of the Array 1:\n");
	for(i=0; i<n1; i++)
		scanf("%d",&arr1[i]);

	printf("Enter the size of the Array 2:");
	scanf("%d",&n2);

	printf("Enter the Elements of the Array 2:\n");
	for(j=0; j<n2; j++)
		scanf("%d",&arr2[j]);

	for(k=0; k< n1 + n2; k++)
		Merged[k] = arr1[k];

	for(k=0; k< n1 + n2; k++)
		Merged[n1 + k] = arr2[k];
	
	/*Use of Sorting to Sort the resultant array*/
	// for(l=0; l< n1 + n2 - 1; l++)
	// {
	// 	for(k=0; k< n1 + n2 - l - 1; k++)
	// 	{
	// 		if(Merged[k]>Merged[k+1])
	// 		{
	// 			int temp = Merged[k];
	// 			Merged[k] = Merged[k+1];
	// 			Merged[k+1] = temp;
	// 		}
	// 	}
	// }

	for(k=0; k<n1+n2; k++)
		printf("%d\t", Merged[k]);

	printf("\n");
}
