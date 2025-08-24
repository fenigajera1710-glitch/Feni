#include<stdio.h>

int main()
{
    float s1,s2,s3,total,average;

    printf("Enter the marks of subject 1:");
    scanf("%f",&s1);

    printf("Enter the marks of subject 2:");
    scanf("%f",&s2);

    printf("Enter the marks of subject 3:");
    scanf("%f",&s3);

    total = s1 + s2 + s3;
    average = total / 3;

    printf("Total Marks = %.2f\n",total);
    printf("Average Marks = %.2f\n",average);

    return 0;

}