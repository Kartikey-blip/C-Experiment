#include <stdio.h>

int main() {
    int n, i, largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = second = -99999;

    for(i = 0; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("Second Largest = %d\n", second);

    return 0;
}
