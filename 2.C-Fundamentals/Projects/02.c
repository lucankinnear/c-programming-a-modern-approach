/* A program that calculates the volume of a sphere.*/

#include <stdio.h>

#define RADIUS 10

int main(void)
{
    float volume = 0.0f;

    volume = (4.0f / 3.0f) * 3.14 * RADIUS *  RADIUS * RADIUS; // Formula: v = (4/3)πr3

    printf("The volume of the sphere is %.2f cubic metres.\n ", volume);

    return 0;

}