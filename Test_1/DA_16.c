#include <stdio.h>
int main ()
{
    int d, t, s;

    printf("enter distance and time: \n");
    scanf("%d %d", &d, &t);

    s = d / t;

    printf("speed : %d", s);

    return 0;
}