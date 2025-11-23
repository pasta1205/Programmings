#include <stdio.h>

#define MAX 1000

void swap(float arr[], int i, int j) 
{
    float temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void Min_Heapify(float p[], float w[], float v[], int i, int n) 
{
    int l = 2 * i;
    int r = 2 * i + 1;
    int smallest;
    int heap_size = n;

    if (l <= heap_size && p[l] < p[i])
        smallest = l;
    else
        smallest = i;

    if (r <= heap_size && p[r] < p[smallest])
        smallest = r;

    if (smallest != i) 
    {
        swap(p, i, smallest);
        swap(w, i, smallest);
        swap(v, i, smallest);
        Min_Heapify(p, w, v, smallest, heap_size);
    }
}

void Build_Min_Heap(float p[], float w[], float v[], int n) 
{
    int i;
    int heap_size = n;
    for (i = heap_size / 2; i >= 1; i--)
        Min_Heapify(p, w, v, i, n);
}

void Heap_Sort(float p[], float w[], float v[], int n) 
{
    int i;
    int heap_size = n;
    Build_Min_Heap(p, w, v, n);
    for (i = heap_size; i >= 2; i--) 
    {
        swap(p, 1, i);
        swap(w, 1, i);
        swap(v, 1, i);
        heap_size--;
        Min_Heapify(p, w, v, 1, heap_size);
    }
}

void main() 
{
    int n, i;
    float W;

    printf("Enter number of items: ");
    scanf("%d", &n);

    float w[MAX], v[MAX], p[MAX], x[MAX];

    printf("Enter weights of items:\n");
    for (i = 1; i <= n; i++)
        scanf("%f", &w[i]);

    printf("Enter values of items:\n");
    for (i = 1; i <= n; i++)
        scanf("%f", &v[i]);

    printf("Enter capacity of knapsack: ");
    scanf("%f", &W);

    for (i = 1; i <= n; i++)
        p[i] = v[i] / w[i];

    Heap_Sort(p, w, v, n);

    for (i = 1; i <= n; i++)
        x[i] = 0.0;

    float U = W;
    float totalProfit = 0.0;

    for (i = 1; i <= n; i++) 
    {
        if (w[i] > U)
            break;
        x[i] = 1.0;
        totalProfit += v[i];
        U -= w[i];
    }

    if (i <= n) {
        x[i] = U / w[i];
        totalProfit += x[i] * v[i];
    }

    printf("\nItem\tWeight\tValue\tFraction\n");
    for (i = 1; i <= n; i++)
        printf("%d\t%.2f\t%.2f\t%.2f\n", i, w[i], v[i], x[i]);

    printf("\nMaximum Profit = %.2f\n", totalProfit);
}