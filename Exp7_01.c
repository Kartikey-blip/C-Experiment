#include <stdio.h>


void modifyValues(int *a, float *b, char *c) {
    *a = *a + 10;      
    *b = *b + 2.5;      
    *c = *c + 1;       
}

int main() {
    
    int num = 5;
    float fnum = 3.5;
    char ch = 'A';

    
    printf("Before function call:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", fnum);
    printf("Char: %c\n", ch);

   
    modifyValues(&num, &fnum, &ch);

    
    printf("\nAfter function call:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", fnum);
    printf("Char: %c\n", ch);

    return 0;
}
