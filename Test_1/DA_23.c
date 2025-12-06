#include <stdio.h>
int main (void)
{
    int cm, m;

    printf("enter meters: ");
    scanf("%d", &m);

    cm = m * 100;

    printf("centimeters: %d", cm);

    return 0;
}