#include <stdio.h>
int main()
{
    int b, h, a;

    printf("enter base and height: \n");
    scanf("%d %d", &b, &h);

    a = (b * h) / 2;

    printf("Area of triangle: %d", a);
    
    return 0;
}