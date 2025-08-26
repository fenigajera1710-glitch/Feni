#include <stdio.h>

int main() {
    float gross_salary, allowances, deductions, net_salary;

    // Get input for gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &gross_salary);

    // Determine allowances and deductions based on gross salary
    if (gross_salary > 10000) {
        allowances = gross_salary * 0.10; // 10% allowance
        deductions = gross_salary * 0.03; // 3% deductions
    } else if (gross_salary > 5000) {
        allowances = gross_salary * 0.07; // 7% allowance
        deductions = gross_salary * 0.02; // 2% deductions
    } else {
        // For gross salary <= 5000, allowances and deductions are 0 as per the problem statement.
        // If you want to handle this case differently, adjust here.
        allowances = 0.0;
        deductions = 0.0;
        printf("Gross salary is 5000 or less, no specific allowances or deductions applied as per the given rules.\n");
    }

    // Calculate net salary using the formula: net salary = gross salary + allowances – deductions
    net_salary = gross_salary + allowances - deductions;

    // Display the results
    printf("\n--- Salary Breakdown ---\n");
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Allowances: %.2f\n", allowances);
    printf("Deductions: %.2f\n", deductions);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}
