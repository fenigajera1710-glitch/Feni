#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

void printAll(struct Student s[], int n) {
    printf("\nList of all students:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", s[i].name);
    }
}

void printByRoll(struct Student s[], int n, int roll) {
    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("\nDetails of Roll No %d:\n", roll);
            printf("Name: %s\nCourse: %s\nMajor: %s\nMinor: %s\n", s[i].name, s[i].course, s[i].major, s[i].minor);
            return;
        }
    }
    printf("Roll number not found.\n");
}

int main() {
    struct Student s[10];
    int i, roll;

    for (i = 0; i < 10; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll No: "); scanf("%d", &s[i].roll);
        printf("Name: "); scanf("%s", s[i].name);
        printf("Course: "); scanf("%s", s[i].course);
        printf("Major: "); scanf("%s", s[i].major);
        printf("Minor: "); scanf("%s", s[i].minor);
    }

    printAll(s, 10);

    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);
    printByRoll(s, 10, roll);

    return 0;
}
