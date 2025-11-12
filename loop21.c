#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number to print digits from left to right
    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    printf("Digits are: ");
    while (rev > 0) {
        printf("%d ", rev % 10);
        rev /= 10;
    }

    return 0;
}
