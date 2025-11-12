#include <stdio.h>

int main() {
    int i;

    printf("Numbers between 1 to 100 divisible by 5:\n");
    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0)
            printf("%d ", i);
    }

    return 0;
}
