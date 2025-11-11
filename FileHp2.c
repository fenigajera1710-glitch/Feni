#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("div5.c", "w");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 0;
    }

    printf("Enter lines (type END to stop):\n");

    while (1) {
        gets(line);  // Read a line from user
        if (strcmp(line, "END") == 0)
            break;
        fputs(line, fp);
        fputs("\n", fp);
    }

    fclose(fp);
    printf("Data written successfully!\n");

    return 0;
}
