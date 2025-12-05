#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, odd = 0, even = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if(a[i] > 0) pos++;
        if(a[i] < 0) neg++;
        if(a[i] % 2 == 0) even++;
        else odd++;
    }

    printf("\nPositive: %d", pos);
    printf("\nNegative: %d", neg);
    printf("\nEven: %d", even);
    printf("\nOdd: %d\n", odd);

    return 0;
}

