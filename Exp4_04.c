#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);

    if(n != p) {
        printf("Matrices are NOT compatible for multiplication!\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("\nEnter Matrix A:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("\nEnter Matrix B:\n");
    for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix
    for(i = 0; i < m; i++)
        for(j = 0; j < q; j++)
            C[i][j] = 0;

    // Multiplication
    for(i = 0; i < m; i++)
        for(j = 0; j < q; j++)
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    // Display A
    printf("\nMatrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    // Display B
    printf("\nMatrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    // Display Result
    printf("\nResultant Matrix (A × B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
