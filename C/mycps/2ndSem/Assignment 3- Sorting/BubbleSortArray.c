/*---PASTA---*/
// Bubble Sort Implementation in C
#include <stdio.h>
void BubbleSort(int arr[50], int n)
{
	int i,j;
	for (i=0; i<n-1; i++)
	{
		for (j=0; j<n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() 
{
    int n,i,j,arr[50];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the Array:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    BubbleSort(arr,n);
    printf("Sorted array in ascending order: ");
    for (i=0; i<n; i++)
        printf("%d\t", arr[i]);
    
    printf("\n");

    return 0;
}
