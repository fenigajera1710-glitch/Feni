#include <stdio.h>
int main() {
    int i, j;
    for(i = 1, j = 5; i <= 3 && j >= 3; i++, j--) {
        printf("%d %d\n", i, j);
        printf("%d %d\n", i, j);
    }
    return 0;
}
