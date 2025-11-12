#include <stdio.h>
void printDiv5(int i) {
    if(i > 100) return;
    if(i % 5 == 0) printf("%d ", i);
    printDiv5(i + 1);
}
int main() {
    printDiv5(1);
    return 0;
}
