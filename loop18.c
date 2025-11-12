#include <stdio.h>

int main() {
    char sex;
    int i, boys = 0, girls = 0;

    printf("Enter sex code for 50 students (M for boy, F for girl):\n");
    for (i = 1; i <= 50; i++) {
        scanf(" %c", &sex);
        if (sex == 'M' || sex == 'm')
            boys++;
        else if (sex == 'F' || sex == 'f')
            girls++;
    }

    printf("\nNumber of Boys: %d", boys);
    printf("\nNumber of Girls: %d", girls);

    return 0;
}
