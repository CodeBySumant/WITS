/*
    Write a "C" Code to accept Rate and Quantity then caculate total and persentage
    provide 20% discount then print total, discount and gross total......    
*/
#include <stdio.h>
int main(void)
{
    int Qua;
    float Ra , Gr , Di , To;
    printf("ENTER RATE: ");
    scanf("%f" ,&Ra);
    printf("ENTER QUANTITY: ");
    scanf("%d" ,&Qua);

    To = Ra * Qua;
    Di = To * 20/100;
    Gr = To - Di;

    printf("Total before Discount: %f\n", To);
    printf("Discount aplied: %f\n", Di);
    printf("Gross Total: %f\n", Gr);
    return 0;
}