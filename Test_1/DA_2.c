#include <stdio.h>
int main(void)
{
    float r , area;
    
    printf("Enter Radious: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("Area: %f", area);
    return 0;
}