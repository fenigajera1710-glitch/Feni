#include <stdio.h>
void printEven(int n, int i) {
    if(i > n) return;
    printf("%d ", 2*i);
    printEven(n, i + 1);
}
int main() {
    int n; scanf("%d", &n);
    printEven(n, 1);
    return 0;
}
