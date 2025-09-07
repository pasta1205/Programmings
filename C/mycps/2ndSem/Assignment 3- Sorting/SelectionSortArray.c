/*---PASTA---*/
// Selection Sort Implementation in C

#include <stdio.h>

void selectionSort(int arr[], int n) 
{
    int i, j, minIndex, temp;
    
    for (i= 0; i<n-1; i++) 
    {
        minIndex = i;

        for (j=i+1; j<n; j++) 
	{
            if (arr[j] < arr[minIndex])
		    minIndex = j;
        }

        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) 
{
	int i;
	for (i=0; i<n; i++) 
		printf("%d ", arr[i]);
	
	printf("\n");
}

int main()
{
	int n,i,arr[50];
	printf("Enter the Size of the Array:");
	scanf("%d",&n);

	printf("Enter the elements of the Array:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	selectionSort(arr, n);
	
	printf("Sorted array: ");
	printArray(arr, n);
	
	return 0;
}
