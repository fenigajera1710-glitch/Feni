#include <stdio.h>
void countSex(int n, int *b, int *g) {
    char c;
    if(n == 0) return;
    scanf(" %c", &c);
    if(c=='b'||c=='B') (*b)++;
    else (*g)++;
    countSex(n - 1, b, g);
}
int main() {
    int b=0, g=0;
    countSex(50, &b, &g);
    printf("Boys=%d Girls=%d", b, g);
    return 0;
}
