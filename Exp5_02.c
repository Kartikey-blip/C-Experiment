#include <stdio.h>


int globalNum = 50;

void testLocal() {
    int localNum = 10; 
    printf("Inside testLocal(): localNum = %d\n", localNum);
}

int main() {
    printf("Inside main(): globalNum = %d\n", globalNum);

    testLocal();

   

    printf("\nWe cannot access localNum in main() because it is LOCAL to testLocal().\n");

    return 0;
}
