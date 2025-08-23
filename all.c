#include<stdio.h>
int main()
{
    int num1,num2,sum,difference,product,quotient;

    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product =num1 * num2;
    quotient = num1 / num2;

    printf("sum = %d\n",sum);
    printf("difference = %d\n",difference);
    printf("product = %d\n",product);
    printf("quotient = %d\n",quotient);

    return 0;
}