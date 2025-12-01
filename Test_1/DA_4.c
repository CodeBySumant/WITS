#include <stdio.h>
int main(void)
{
    int P, R, T;
    float SI;

    printf("Enter P, R, T: ");
    scanf("%d %d %d", &P, &R, &T);

    SI = (P * R * T) / 100;

    printf("Simple interest: %f", SI);
    return 0;
}