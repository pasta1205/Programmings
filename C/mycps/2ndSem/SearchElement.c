#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;
    int searchElement;
    int found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d is present in the array.\n", searchElement);
    } else {
        printf("%d is not present in the array.\n", searchElement);
    }

    free(arr);

    return 0;
}