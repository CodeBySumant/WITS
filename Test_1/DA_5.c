#include <stdio.h>
int main (void)
{
    int km, m;

    printf("enter KM: ");
    scanf("%d", &km);

    m = km * 1000;

    printf("Meters: %d m", m);

    return 0;
}