#include <stdio.h>
int main()
{
    int a, b, c, sum;

    printf("enter three Number:\n");
    scanf("%d %d %d", &a , &b, &c);

    sum = a + b + c;

    printf("simple SUM: %d", sum);
    
    return 0;
}