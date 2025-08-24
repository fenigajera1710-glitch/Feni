#include<stdio.h>

int main()
{

    int L, area, perimeter;

    printf("Enter side length of square:");
    scanf("%d",&L);

    area = L * L;
    perimeter = 4 * L;

    printf("Area of square = %d\n",area);
    printf("Perimeter of square = %d\n",perimeter);

    return 0;
}