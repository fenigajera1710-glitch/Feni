#include <stdio.h>
void printNat(int n) {
    if(n == 0) return;
    printNat(n - 1);
    printf("%d ", n);
}
int main() {
    int n;
    scanf("%d", &n);
    printNat(n);
    return 0;
}
