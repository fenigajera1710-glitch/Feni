#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op) {
        case '+': printf("Result = %.2f\n", add(num1, num2)); break;
        case '-': printf("Result = %.2f\n", subtract(num1, num2)); break;
        case '*': printf("Result = %.2f\n", multiply(num1, num2)); break;
        case '/': printf("Result = %.2f\n", divide(num1, num2)); break;
        default: printf("Invalid operator!\n");
    }

    return 0;
}
