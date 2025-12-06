#include <stdio.h>
int main()
{
    int a, b, c;
    float avg;

    printf("enter thre number a, b, c:\n ");
    scanf("%d %d %d", &a, &b ,&c);

    avg = (a + b + c) / 3;

    printf("here is the AVG: %.2f", avg);

    return 0;
}