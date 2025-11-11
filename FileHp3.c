#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("div5.c", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    printf("File contents:\n\n");

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
