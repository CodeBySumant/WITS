#include <stdio.h>
int main()
{
    int n, cube;
    printf("Enter Number for Cube: ");
    scanf("%d", &n);

    cube = n * n * n;

    printf("cube of a number: %d", cube);
    
    return 0;
}