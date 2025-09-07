/*---PASTA---*/
//Heap Sort Implementation in C
#include <stdio.h>

void adjust(int a[], int i, int n) 
{
    int j = 2 * i;
    int item = a[i];

    while (j <= n)
    {
        if (j < n && a[j] < a[j + 1])
            j = j + 1;

        if (item >= a[j])
            break;

        a[j / 2] = a[j];
        j = 2 * j;
    }
    a[j / 2] = item;
}

void heapify(int a[], int n) 
{
    int i;
    for (i = n / 2; i >= 1; i--)
        adjust(a, i, n);
}

void heapsort(int a[], int n) 
{
    int t, i;
    heapify(a, n);

    for (i = n; i >= 2; i--) 
    {
        t = a[i];
        a[i] = a[1];
        a[1] = t;
        adjust(a, 1, i - 1);
    }
}

void main() 
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    heapsort(a, n);

    printf("Sorted array:\n");
    for (i = 1; i <= n; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
