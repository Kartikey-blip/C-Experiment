#include <stdio.h>

int main() {
    // Declare variables
    int num = 10;
    float fnum = 5.5;
    char ch = 'A';

    // Declare pointers and initialize with addresses
    int *pnum = &num;
    float *pfnum = &fnum;
    char *pch = &ch;

    // Print original addresses and values
    printf("Original addresses and values:\n");
    printf("Integer: Address = %p, Value = %d\n", pnum, *pnum);
    printf("Float:   Address = %p, Value = %.2f\n", pfnum, *pfnum);
    printf("Char:    Address = %p, Value = %c\n", pch, *pch);

    // Pointer increment
    pnum++;
    pfnum++;
    pch++;

    printf("\nAfter incrementing pointers:\n");
    printf("Integer pointer: Address = %p\n", pnum);
    printf("Float pointer:   Address = %p\n", pfnum);
    printf("Char pointer:    Address = %p\n", pch);

    // Pointer decrement
    pnum--;
    pfnum--;
    pch--;

    printf("\nAfter decrementing pointers (back to original):\n");
    printf("Integer pointer: Address = %p, Value = %d\n", pnum, *pnum);
    printf("Float pointer:   Address = %p, Value = %.2f\n", pfnum, *pfnum);
    printf("Char pointer:    Address = %p, Value = %c\n", pch, *pch);

    return 0;
}
