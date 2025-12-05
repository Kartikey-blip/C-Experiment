#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0, max, min;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    max = min = arr[0];

   
    for (i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

  
    printf("Sum = %d\n", sum);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

   
    free(arr);

    return 0;
}
