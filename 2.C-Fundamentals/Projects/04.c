/* A program that adds 5% tax. */

#include <stdio.h>

int main(void)
{
    float amount = 0.0f;
    float total = 0.0f;

    // Taking user input.
    printf("Enter an amount: ");
    scanf("%.2f", &amount);

    // Calculate tax.
    total = amount + (amount * 0.05);
    
    // Displaying output.
    printf("With tax added: $%.2f\n", total);

    return 0;
}