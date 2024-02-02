#include <stdio.h>

int main()
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11);

    int first, second;
    first = a1 + a3 + a5 + a7 + a9 + a11;
    second = a2 + a4 + a6 + a8 + a10;

    int tot;

    tot = first * 3 + second;
    tot = tot - 1;
    tot = tot % 10;
    tot = 9 - tot;

    printf("Check digit: %d", tot);

    return 0;
}