#include <stdio.h>
int sumDiv13(int i) {
    if(i > 100) return 0;
    if(i % 13 == 0)
        return i + sumDiv13(i + 1);
    else
        return sumDiv13(i + 1);
}
int main() {
    printf("Sum = %d", sumDiv13(1));
    return 0;
}
