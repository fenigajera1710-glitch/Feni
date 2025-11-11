#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;
    int inWord = 0;

    fp = fopen("div5.c", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ')
            spaces++;
        if (ch == '\n')
            lines++;
        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", chars);
    printf("Spaces: %d\n", spaces);

    return 0;
}
