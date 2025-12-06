#include <stdio.h>
int main()
{
    int side, vol;

    printf("enter Side: ");
    scanf("%d", &side);

    vol = side * side * side;

    printf("Volume of a cube: %d", vol);
    return 0;
}