#include <stdio.h>
int main ()
{
    int d, rd, w;

    printf("enter Day: ");
    scanf("%d", &d);

    w = d / 7;
    rd = d % 7;

    printf("converted weeks: %d\n", w);
    printf("remaining days: %d", rd);

    return 0;
}