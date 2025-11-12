#include <stdio.h>

int main() {
    int amount, i, notes;
    int currency[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("\nMinimum number of notes:\n");
    for(i = 0; i < 9; i++) {
        if(amount >= currency[i]) {
            notes = amount / currency[i];
            amount = amount % currency[i];
            printf("%d Rs note = %d\n", currency[i], notes);
        }
    }

    return 0;
}
