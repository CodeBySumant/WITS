#include <stdio.h>
int main(void)
{
    float c, F;

    printf("Enter Celsius: ");
    scanf("%f", &c);

    F = (c * 9/5) + 32;

    printf("Fahrenheit: %.2f", F);
    return 0;
}