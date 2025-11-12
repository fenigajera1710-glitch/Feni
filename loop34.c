#include <stdio.h>
int main() {
    int n, a = 1, b = 1, c, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    if(n >= 1) printf("%d ", a);
    if(n >= 2) printf("%d ", b);
    for(i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
