#include <stdio.h>
int main ()
{
    int hr , min , sec;

    printf("Enter Hour: ");
    scanf("%d", &hr);

    min = hr * 60;
    sec = hr * 3600;

    printf("hr: %d\n", min);
    printf("sec: %d\n", sec);
    
    return 0;
}