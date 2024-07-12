#include <stdio.h>

// Function to calculate the Interests Payable
double calculateInterestsPayable(double principal, double rate, double time) {
    return principal * rate * time;
}

// Function to calculate the Total Debt
double calculateTotalDebt(double interestsPayable, double principal) {
    return interestsPayable + principal;
}

// Function to calculate the Debt-to-Equity Ratio
double calculateDebtToEquityRatio(double totalDebt, double shareholdersEquity) {
    return totalDebt / shareholdersEquity;
}

int main() {
    double principal, rate, time, shareholdersEquity;
    double interestsPayable, totalDebt, debtToEquityRatio;

    // Input Principal Amount
    printf("Enter the Principal Amount: ");
    scanf("%lf", &principal);

    // Input Rate
    printf("Enter the Rate: ");
    scanf("%lf", &rate);

    // Input Time
    printf("Enter the Time: ");
    scanf("%lf", &time);

    // Input Shareholders Equity
    printf("Enter the Shareholders Equity: ");
    scanf("%lf", &shareholdersEquity);

    // Calculate Interests Payable
    interestsPayable = calculateInterestsPayable(principal, rate, time);

    // Calculate Total Debt
    totalDebt = calculateTotalDebt(interestsPayable, principal);

    // Calculate Debt-to-Equity Ratio
    debtToEquityRatio = calculateDebtToEquityRatio(totalDebt, shareholdersEquity);

    // Display Results
    printf("Interests Payable: %.2lf\n", interestsPayable);
    printf("Total Debt: %.2lf\n", totalDebt);
    printf("Debt-to-Equity Ratio: %.2lf\n", debtToEquityRatio);

    return 0;
}
