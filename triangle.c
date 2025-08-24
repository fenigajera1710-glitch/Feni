#include<stdio.h>

int main()
{   float H,L,area;

    printf("Enter the height of triangle:");
    scanf("%f",&H);  

    printf("Enter the length of triangle:");
    scanf("%f",&L);

    area = (H * L) / 2;

    printf("Area of triangle = %.2f\n", area);
    return 0;
}