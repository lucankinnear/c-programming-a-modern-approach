/* A program that takes user input to calculate the value of x. */
/* The equation: ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6 */

#include <stdio.h>

int main(void)
{
    int x = 0;
    int answer = 0;

    // Taking user input.
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Calculating the output.
    answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    // Displaying the output.
    printf("Answer = %d", answer);

    return 0;
}