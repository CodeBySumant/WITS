/*
    write a c code to accept radious and print area of circle    
*/
# include <stdio.h>
int main (void)
{
    float R , Ar;
    printf("Enter Radious: ");
    scanf("%f", &R);
    Ar = 3.14 * R * R;
    printf("Area of a circle: %.2f", Ar);
    return 0;
}