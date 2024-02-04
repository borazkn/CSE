#include <stdio.h>

int main(int argc, char* argv[])
{
    int a1, a2, b1, b2;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &a1, &a2, &b1, &b2);

    printf("The sum is %d/%d", (a1 * b2 + a2 * b1),(a2 * b2));

    return 0;
}