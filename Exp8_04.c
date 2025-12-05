#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size, newSize;
    printf("Enter initial size: ");
    scanf("%d", &size);
    getchar(); // consume newline

    char *str = (char *)malloc(size);
    printf("Enter string: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("You entered: %s\n", str);

    printf("Enter new size: ");
    scanf("%d", &newSize);
    getchar();

    str = (char *)realloc(str, newSize);

    char extra[100];
    printf("Append more: ");
    fgets(extra, 100, stdin);
    extra[strcspn(extra, "\n")] = '\0';

    strcat(str, extra);
    printf("Updated string: %s\n", str);

    free(str);
    return 0;
}
