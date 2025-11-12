#include <stdio.h>
int sumDiv3(int i) {
    if(i > 100) return 0;
    if(i % 3 == 0)
        return i + sumDiv3(i + 1);
    else
        return sumDiv3(i + 1);
}
int main() {
    printf("Sum = %d", sumDiv3(1));
    return 0;
}
