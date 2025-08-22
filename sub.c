#include <stdio.h>

int main() {
    int num1, num2, sub;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sub = num1 - num2;

    // Display result
    printf("Sum = %d\n", sub);
    return 0;
}
