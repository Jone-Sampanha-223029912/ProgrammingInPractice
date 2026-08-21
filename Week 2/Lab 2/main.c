#include <stdio.h>
int main(){
    double revenue, expenses, balance, assets, procurament, payroll;
    int department;

    printf("=====================================\n");
    printf("    MUNICIPAL BUDGET CALCULATOR     \n");
    printf("=====================================\n");

    printf("Enter the total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter the total expenses: ");
    scanf("%lf", &expenses);

    printf("Enter the department number: ");
    scanf("%d", &department);

    // Calculate balance
    balance = revenue - expenses;

    // Display results
    printf("\n=====================================\n");
    printf("    BUDGET SUMMARY     \n");
    printf("=====================================\n");
    printf("Assets: $%.2f\n", assets);
    printf("Procurament: $%.2f\n", procurament);
    printf("Payroll: $%.2f\n", payroll);
    printf("Total Revenue: $%.2f\n", revenue);
    printf("Total Expenses: $%.2f\n", expenses);
    printf("Department: %d\n", department);
    printf("Net Balance: $%.2f\n", balance);

    return 0;
}