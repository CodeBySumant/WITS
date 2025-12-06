#include <stdio.h>
int main ()
{
    int a, b, l;

    printf("enter length and width: \n");
    scanf("%d %d", &l, &b);

    a = l * b;

    printf("Area : %d", a);

    return 0;
}