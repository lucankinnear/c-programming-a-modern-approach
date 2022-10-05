/* A program that declares and prints int and float variables*/

#include <stdio.h>

int main(void)
{
    int i, j, k, l;
    float a, b, c, d;

    printf("The values of the uninitialized integers are:\ni = %d\tj = %d\tk = %d\tl = %d\n", i, j, k, l);
    printf("The values of the uninitialized floats are:\na = %f\tb = %f\tc = %f\td = %f\n", a, b, c, d);

    return 0;
}