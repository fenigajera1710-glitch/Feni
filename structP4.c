#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int matches;
    float average;
};

int main() {
    struct Cricketer c[10], temp;
    int i, j;

    for (i = 0; i < 10; i++) {
        printf("\nEnter details of cricketer %d:\n", i + 1);
        printf("Name: "); scanf("%s", c[i].name);
        printf("Age: "); scanf("%d", &c[i].age);
        printf("Matches: "); scanf("%d", &c[i].matches);
        printf("Average runs: "); scanf("%f", &c[i].average);
    }

    // Sort in ascending order of average runs
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (c[i].average > c[j].average) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nCricketers sorted by average runs (ascending):\n");
    for (i = 0; i < 10; i++) {
        printf("Name: %s\tAge: %d\tMatches: %d\tAverage: %.2f\n",
               c[i].name, c[i].age, c[i].matches, c[i].average);
    }

    return 0;
}
