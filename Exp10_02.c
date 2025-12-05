#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <math.h>
#include <string.h>

// Function using stdarg.h
int sum(int n, ...) {
    va_list args;
    va_start(args, n);
    int total = 0;
    for(int i=0;i<n;i++) total += va_arg(args,int);
    va_end(args);
    return total;
}

int main() {
    // stdio.h and ctype.h
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("Uppercase: %c\n", toupper(ch));

    // stdlib.h and time.h
    srand(time(NULL));
    printf("Random number (0-99): %d\n", rand()%100);

    // math.h
    printf("sqrt(16)=%.2f, 2^3=%.2f\n", sqrt(16), pow(2,3));

    // string.h
    char str[20]="Hello";
    strcat(str," World");
    printf("String: %s, Length: %lu\n", str, strlen(str));

    // stdarg.h
    printf("Sum of 1,2,3= %d\n", sum(3,1,2,3));

    // assert.h
    int x=5;
    assert(x>0);

    // malloc/free
    int *arr=(int*)malloc(3*sizeof(int));
    for(int i=0;i<3;i++) arr[i]=i+1;
    printf("Array: ");
    for(int i=0;i<3;i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    return 0;
}
