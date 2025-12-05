#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    
    printf("Enter text to write to the file: ");
    fgets(text, sizeof(text), stdin);

  
    fprintf(fp, "%s", text);

    printf("Text successfully written to example.txt\n");

    
    fclose(fp);

    return 0;
}
