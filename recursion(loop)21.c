#include <stdio.h>
void separate(int n) {
    if(n == 0) return;
    separate(n / 10);
    printf("%d ", n % 10);
}
int main() {
    int n; scanf("%d", &n);
    separate(n);
    return 0;
}
