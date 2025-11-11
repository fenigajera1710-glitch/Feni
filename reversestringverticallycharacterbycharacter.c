#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  // read input string

    printf("\nReversed string vertically:\n");

    // print characters one by one from end to start
    for (i = strlen(str) - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}
