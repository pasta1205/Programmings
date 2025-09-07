#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr;
    int n = 10;
    int sum = 0;

    arr = (int *)malloc(n * sizeof(int));
 
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    printf("Sum of the array elements: %d\n", sum);

    free(arr);

    return 0;
}