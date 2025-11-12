#include <stdio.h>
int main() {
    int i, j;
    for(i = 1, j = 5; i <= 5 && j >= 1; i++, j--) {
        printf("%d %d\n", i, j);
    }
    return 0;
}
