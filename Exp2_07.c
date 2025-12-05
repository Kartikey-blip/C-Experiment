#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}
