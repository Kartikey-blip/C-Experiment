#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int words = 0, inWord = 0;

    
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

 
    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    
    if (inWord) words++;

    printf("Number of words in the file: %d\n", words);

    fclose(fp);
    return 0;
}
