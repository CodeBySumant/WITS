#include <stdio.h>
int main ()
{
    int d, t, s;

    printf("enter speed and time: \n");
    scanf("%d %d", &s, &t);

    d = s * t;

    printf("distance : %d", d);

    return 0;
}