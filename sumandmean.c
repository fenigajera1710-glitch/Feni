#include <stdio.h>

int main() {
    int numbers[10], sum = 0;
    float mean;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / 10.0; // Calculate mean

    printf("Sum = %d\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}
