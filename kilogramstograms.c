#include<stdio.h>

int main()
{
    float grams,kilograms;

    printf("Enter weight in kilograms:");
    scanf("%f",&kilograms);

    grams = kilograms * 1000;

    printf("%.2f kilograms = %.2f grams",kilograms,grams);

    return 0;
}
