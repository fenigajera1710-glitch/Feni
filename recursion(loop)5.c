#include <stdio.h>
void printOdd(int n, int i) {
    if(i > n) return;
    printf("%d ", 2*i - 1);
    printOdd(n, i + 1);
}
int main() {
    int n; scanf("%d", &n);
    printOdd(n, 1);
    return 0;
}
