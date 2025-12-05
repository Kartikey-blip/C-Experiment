#include <stdio.h>

int main() {

    int x = 10;   // variable in main block
    printf("Inside main block: x = %d\n", x);

    {   // inner block starts
        int y = 20;   // y exists only inside this block
        printf("Inside inner block: x = %d, y = %d\n", x, y);

        {   // nested inner block
            int z = 30;
            printf("Inside nested block: x = %d, y = %d, z = %d\n", x, y, z);
        }

        // printf("%d", z);  
    }   // inner block ends

    // printf("%d", y);  

    printf("\nVariables y and z cannot be used outside their blocks.\n");

    return 0;
}
