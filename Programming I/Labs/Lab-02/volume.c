#include <stdio.h>

#define PI 3.14159f
#define fraction (4.0f / 3.0f)

int main(int argc, char* argv[])
{
    int r;
    float V;

    printf("Enter radius of sphere: ");
    scanf("%d", &r);

    V = fraction * PI * r * r * r;

    printf("Volume (cubic meters): %.1f", V);

    return 0;
}