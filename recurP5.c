#include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int arr[5] = {10, 25, 3, 45, 7};
    int max, min;

    findMaxMin(arr, 5, &max, &min);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}
