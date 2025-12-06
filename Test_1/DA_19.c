#include <stdio.h>
int main ()
{
    int pai, rup;

    printf("enter rupees: ");
    scanf("%d", &rup);

    pai = rup * 100;

    printf("converted rupees to paise: %d", pai);
    
    return 0;
}