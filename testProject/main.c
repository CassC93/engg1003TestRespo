#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter an number: ");
    scanf("%f", &x); // Note change %d to %f
    y = (x+2)/(x-1);
    printf("y: %f\n", y);
    return 0;
}
