#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float physics, maths, chemistry, total;
};

int main() {
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter marks in Physics, Maths and Chemistry: ");
    scanf("%f %f %f", &s.physics, &s.maths, &s.chemistry);

    s.total = s.physics + s.maths + s.chemistry;

    printf("\nStudent Details:\n");
    printf("Roll No: %d\nName: %s\nPhysics: %.2f\nMaths: %.2f\nChemistry: %.2f\nTotal: %.2f\n",
           s.roll, s.name, s.physics, s.maths, s.chemistry, s.total);

    return 0;
}
