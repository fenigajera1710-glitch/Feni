#include <stdio.h>

int main() {
    int numbers[100], i, largest, smallest;

    // Input 100 numbers
    printf("Enter 100 numbers:\n");
    for (i = 0; i < 100; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize largest and smallest with the first number
    largest = smallest = numbers[0];

    // Loop through the array to find largest and smallest
    for (i = 1; i < 100; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Output the results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
