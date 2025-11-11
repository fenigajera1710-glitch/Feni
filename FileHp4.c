#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    char choice;

    fp = fopen("div5.c", "w");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 0;
    }

    fprintf(fp, "Roll No,Name\n");  // CSV header

    do {
        printf("Enter Roll No: ");
        scanf("%d", &roll);
        printf("Enter Name: ");
        scanf("%s", name);

        fprintf(fp, "%d,%s\n", roll, name);

        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("Data saved to div5.c (open in Excel)\n");

    return 0;
}
