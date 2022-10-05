/* A program that takes user input to calculate the value of x. */
/* The equation: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 */

#include <stdio.h>

int main(void)
{
    int x = 0;
    int answer = 0;

    // Taking user input.
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Calculating the output.
    answer = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x)
           - (x * x) + (7 * x) - 6;

    // Displaying the output.
    printf("Answer = %d", answer);

    return 0;
}