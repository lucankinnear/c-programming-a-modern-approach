/* A program that calculates the remaining balance on a loan after */
/*         the first, second and third monthly payments.          */

#include <stdio.h>

int main(void) 
{
    // Declaring the variables.
    float loan = 0.0f;
    float rate = 0.0f;
    float payment = 0.0f;

    // Taking user input.
    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    // Calculating the remaining balance.
    loan = loan - payment + (loan * rate / 100.0 / 12.0);
    printf("Balance remaining after first payment: $%.2f\n", loan);
    
    loan = loan - payment + (loan * rate / 100.0 / 12.0);
    printf("Balance remaining after second payment: $%.2f\n", loan); 

    loan = loan - payment + (loan * rate / 100.0 / 12.0);
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}