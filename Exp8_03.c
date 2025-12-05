#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, newSize, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter new size: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));

    for (i = n; i < newSize; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("All elements: ");
    for (i = 0; i < newSize; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
