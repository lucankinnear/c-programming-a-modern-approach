/* A program that takes user input to calculates the volume of a sphere.*/

#include <stdio.h>

int main(void)
{
    float volume;
    int radius = 0;
    
    // User Input
    printf("Please enter the radius of the sphere: "); 
    scanf("%d", &radius);

    volume = (4.0f / 3.0f) * 3.14 * radius *  radius * radius; // Formula: v = (4/3)πr3
   
    printf("The volume of the sphere is %.2f cubic metres.\n", volume); // Display the output.
   
    return 0;

}