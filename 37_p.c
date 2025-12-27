#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i, newSize;

    /* Using malloc */
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed using malloc.\n");
        return 1;
    }

    printf("\nEnter %d elements (malloc):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nElements using malloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    /* Using realloc */
    printf("\n\nEnter new size for array: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("\nEnter remaining %d elements:\n", newSize - n);
    for (i = n; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nElements after realloc:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    /* Free memory */
    free(arr);

    /* Using calloc */
    printf("\n\nUsing calloc\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed using calloc.\n");
        return 1;
    }

    printf("\nElements using calloc (initialized to zero):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
