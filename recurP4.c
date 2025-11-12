#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nInside function (after swap): a = %d, b = %d", a, b);
}

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d", x, y);
    swap(x, y);
    printf("\nAfter function call: x = %d, y = %d", x, y);
    return 0;
}
