#include <stdio.h>
void printNat(int n) {
    if(n == 0) return;
    printNat(n - 1);
    printf("%d ", n);
}
int main() {
    printNat(10);
    return 0;
}
