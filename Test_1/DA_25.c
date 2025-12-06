#include <stdio.h>
int main (void)
{
    int bill, units, rate;

    printf("enter units and rate: \n");
    scanf("%d %d", &units, &rate);

    bill = units * rate;

    printf("total Bill: %d", bill);
    
    return 0;
}