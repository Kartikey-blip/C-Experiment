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

    // Print values and addresses
    printf("Integer variable: num = %d, Address = %p, Pointer value = %p, *Pointer = %d\n", num, &num, pnum, *pnum);
    printf("Float variable: fnum = %.2f, Address = %p, Pointer value = %p, *Pointer = %.2f\n", fnum, &fnum, pfnum, *pfnum);
    printf("Char variable: ch = %c, Address = %p, Pointer value = %p, *Pointer = %c\n", ch, &ch, pch, *pch);

    return 0;
}
