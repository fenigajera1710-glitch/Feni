#include <stdio.h>

int main() {
    int subject1, subject2, subject3;
    float total, average;

    printf("Enter marks for three subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &subject1);
    printf("Subject 2: ");
    scanf("%d", &subject2);
    printf("Subject 3: ");
    scanf("%d", &subject3);

    total = subject1 + subject2 + subject3;
    average = total / 3.0;

    printf("\nTotal Marks: %.0f\n", total);
    printf("Average Marks: %.2f\n", average);

    if (subject1 < 35 || subject2 < 35 || subject3 < 35) {
        printf("Grade: Fail (Failed in one or more subjects)\n");
    } else if (average >= 70) {
        printf("Grade: Distinction\n");
    } else if (average >= 60) {
        printf("Grade: First Class\n");
    } else if (average >= 50) {
        printf("Grade: Second Class\n");
    } else if (average >= 35) {
        printf("Grade: Third Class\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
