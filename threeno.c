#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    // Prompt the user to enter three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Find the smallest number
    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    // Print the largest and smallest numbers
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}