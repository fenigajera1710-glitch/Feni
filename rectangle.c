#include<stdio.h>

int main()
{

    int L,B,area,perimeter;

    printf("Enter the length of rectangle:");
    scanf("%d",&L);

    printf("Enter the breadth of rectangle:");
    scanf("%d",&B);

    area = L * B;
    perimeter = 2 * (L + B);

    printf("Area of rectangle = %d\n",area);
    printf("perimeter of rectangle =%d\n",perimeter);

    return 0;
}