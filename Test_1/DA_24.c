#include <stdio.h>
int main (void)
{
    int kg, g;

    printf("enter grams: ");
    scanf("%d", &g);

    kg = g / 1000;

    printf("kilograns: %d", kg);

    return 0;
}