#include <stdio.h>
int main() {
    int i, j;
    for(i = 5; i >= 3; i--) {
        for(j = 1; j <= 2; j++) {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
