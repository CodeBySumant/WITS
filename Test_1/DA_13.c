#include <stdio.h>
int main ()
{
    int min, sec;

    printf("enter minutes: ");
    scanf("%d", &min);

    sec = min * 60;

    printf("converted into second: %d", sec);
    
    return 0;
}