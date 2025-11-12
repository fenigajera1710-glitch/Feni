#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num != 0) {
        rem = num % 10;
        sum += rem * rem * rem;   // cube of each digit
        num /= 10;
    }

    if (temp == sum)
        printf("It is an Armstrong number.");
    else
        printf("It is not an Armstrong number.");

    return 0;
}
