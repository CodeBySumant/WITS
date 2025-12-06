#include <stdio.h>
int main(void)
{
    float cel, fah;

    printf("Enter Fahrenheit: ");
    scanf("%f", &fah);

    cel = (fah - 32) * 5/9;

    printf("Celsius: %.2f", cel);

    return 0;
}