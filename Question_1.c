/*
    write a c code to accept 3 subject marks then print total and
    percentage of marks.
*/

#include <stdio.h>
int main(void)
{
    int m1, m2, m3;
    int total;
    double percentage;

    printf("Enter marks for 3 subjects (0-100): ");
    scanf("%d %d %d", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    percentage = (total / 300.0) * 100.0;
    printf("Total marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}