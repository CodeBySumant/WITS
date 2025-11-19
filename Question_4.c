/*
    Write a "C" code to accept the value of a, b, c 
    then print the roots of a quadratic equation.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;

    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    printf("Enter value of c: ");
    scanf("%f", &c);

    d = (b * b) - (4 * a * c);

    x1 = -b + sqrt(d)/2 * a;
    x2 = b - sqrt(d)/2 * a;

    printf("Roots are Real and Different:\n");
    printf("x1 = %f\n x2 = %f\n", x1, x2);

    return 0;
}