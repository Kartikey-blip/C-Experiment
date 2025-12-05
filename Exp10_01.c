#include <stdio.h>

// Define macros for arithmetic operations
#define ADD(a,b) ((a)+(b))
#define SUB(a,b) ((a)-(b))
#define MUL(a,b) ((a)*(b))
#define DIV(a,b) ((b)!=0 ? (a)/(b) : 0)

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Add=%d  Sub=%d  Mul=%d  Div=%d\n", ADD(x,y), SUB(x,y), MUL(x,y), DIV(x,y));

    return 0;
}
