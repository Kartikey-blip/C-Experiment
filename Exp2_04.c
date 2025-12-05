#include <stdio.h>

int main() {
    int N;

    printf("Enter a number: ");
    scanf("%d", &N);

    if (N % 2 == 0) {
        printf("The number is Even\n");
    } else {
        printf("The number is Odd\n");
    }

    return 0;
}
