#include <stdio.h>

int main()
{
    int n, sum = 1;

    printf("This progream multiplies a series of numbers.\n");
    printf("Enter a number (0 to terminate): ");
    scanf("%d", &n);
    while(n != 0){
        sum *= n;
        printf("Enter a number (0 to terminate): ");
        scanf("%d", &n);
    }
    printf("The result is %d\n", sum);

    return 0;
}