#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount;

    printf("==== COMPOUND INTEREST CALCULATOR ====\n");

    // Get Principal Amount
    printf("Enter Principal Amount (INR): ");
    scanf("%f", &principal);

    // Get Annual Interest Rate
    printf("Enter Annual Interest Rate (per annum %%): ");
    scanf("%f", &rate);

    // Get Time in Years 
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Formula: A = P(1 + r/100)^t
    amount = principal * pow(1 + rate / 100, time);

    float interest = amount - principal;

    printf("\n Principal Amount: INR %.2f\n", principal);
    printf("Interest Rate: %.2f %% per annum\n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("Compound Interest: INR %.2f years\n", interest);
    printf("Final Amount: INR %.2f\n", amount);

    return 0;


}