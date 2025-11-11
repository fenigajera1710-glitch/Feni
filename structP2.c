#include <stdio.h>

struct Customer {
    int acc_no;
    char name[50];
    float balance;
};

void printLowBalance(struct Customer c[], int n) {
    printf("\nCustomers with balance below Rs.100:\n");
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 100)
            printf("Account No: %d\tName: %s\n", c[i].acc_no, c[i].name);
    }
}

void transaction(struct Customer c[], int n) {
    int acc, code, found = 0;
    float amt;
    printf("\nEnter Account No, Amount, and Code (1 for Deposit, 0 for Withdrawal): ");
    scanf("%d %f %d", &acc, &amt, &code);

    for (int i = 0; i < n; i++) {
        if (c[i].acc_no == acc) {
            found = 1;
            if (code == 1)
                c[i].balance += amt;
            else {
                if (c[i].balance < amt)
                    printf("The balance is insufficient for the specified withdrawal.\n");
                else
                    c[i].balance -= amt;
            }
            printf("Updated Balance: %.2f\n", c[i].balance);
        }
    }
    if (!found)
        printf("Account not found.\n");
}

int main() {
    struct Customer c[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("\nEnter details for customer %d:\n", i + 1);
        printf("Account No: "); scanf("%d", &c[i].acc_no);
        printf("Name: "); scanf("%s", c[i].name);
        printf("Balance: "); scanf("%f", &c[i].balance);
    }

    printLowBalance(c, 10);
    transaction(c, 10);

    return 0;
}
