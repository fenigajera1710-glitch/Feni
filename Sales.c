#include <stdio.h>

int main() {
    float grossSales, discount = 0.0, netSales;

    // Prompt the user to enter the gross sales
    printf("Enter the gross sales amount: ");
    scanf("%f", &grossSales); // Read the gross sales value

    // Determine the discount percentage based on gross sales
    if (grossSales > 20000) {
        discount = 0.15; // 15% discount
    } else if (grossSales > 10000) {
        discount = 0.10; // 10% discount
    } else {
        discount = 0.05; // 5% discount
    }

    // Calculate the net sales
    netSales = grossSales - (grossSales * discount);

    // Display the results
    printf("\n--- Calculation Details ---\n");
    printf("Gross Sales: %.2f\n", grossSales);
    printf("Discount Rate: %.0f%%\n", discount * 100); // Show discount percentage
    printf("Discount Amount: %.2f\n", grossSales * discount);
    printf("Net Sales: %.2f\n", netSales);

    return 0;
}