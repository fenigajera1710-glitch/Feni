#include<stdio.h>

int main()
{
    float  R,area;

    printf("Enter the radius of circle:");
    scanf("%f",&R);

    area = 22/7 * R * R;

    printf("Area of circle = %.2f\n",area);

    return 0;
}