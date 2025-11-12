#include <stdio.h>

int main() {
    int num, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (temp == rev)
        printf("It is a Palindrome number.");
    else
        printf("It is not a Palindrome number.");

    return 0;
}
