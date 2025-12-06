#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter Number(a,b): ");
    scanf("%d %d", &a, &b);

    c = a + b;
    a = c - a;
    b = c - b;

    printf("swaped Number are\n a = %d\n b = %d\n", a , b);

    return 0;
}