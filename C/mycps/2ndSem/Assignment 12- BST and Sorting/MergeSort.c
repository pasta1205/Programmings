/*---PASTA---*/
//Merge Sort Implementation in C
#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int low, int mid, int high)
{
    int h = low, i = low, j = mid + 1, k;
    int temp[high + 1];
    while(h <= mid && j <= high)
    {
        if(arr[h] < arr[j])
        {
            temp[i] = arr[h];
            h++;
        }
        else
        {
            temp[i] = arr[j];
            j++;
        }
        i++;
    }
    
    if(h > mid)
    {
        for(k = j; k <= high; k++)
        {
            temp[i] = arr[k];
            i++;
        }
    }
    else
    {
        for(k = h; k <= mid; k++)
        {
            temp[i] = arr[k];
            i++;
        }
    }

    for(k = low; k <= high; k++)
    {
        arr[k] = temp[k];
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}