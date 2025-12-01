#include <stdio.h>

int main(void)
{
    int l, w, per;

    printf("enter length, width: ");
    scanf("%d %d", &l, &w);

    per = 2 * (l + w);

    printf("perimeter: %d", per);
    
    return 0;
}