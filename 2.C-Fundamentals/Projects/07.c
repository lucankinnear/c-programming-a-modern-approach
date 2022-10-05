#include <stdio.h>

int main(void)
{
    // Declaring the variables.
    int input = 0;
    int x20, x10, x5, x1;
    
    // Taking user input.
    printf("Enter a dollar amount: ");
    scanf("%d", &input);

    // Calculating the output.
    x20 = input / 20;
    input = input - (x20 * 20);
   
    x10 = input / 10;
    input = input - (x10 * 10);
    
    x5 = input / 5;
    input = input - (x5 * 5);
    
    x1 = input / 1;
    input = input - (x1 * 1);

    // Displaying the output.
    printf("$20 bills: %d\n", x20);
    printf("$10 bills: %d\n", x10);
    printf(" $5 bills: %d\n", x5);
    printf(" $1 bills: %d\n", x1);

    return 0;
}