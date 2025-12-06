#include <stdio.h>
int main(void)
{
    int m1, m2, m3, m4, m5;
    int total;
    double percentage;

    printf("Enter marks for 5 subjects (0-100): \n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100.0;

    printf("Total marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}