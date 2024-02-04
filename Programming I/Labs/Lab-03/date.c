#include <stdio.h>

int main(int argc, char* argv[])
{
    int mm, dd, yyyy;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d-%d-%d", &mm, &dd, &yyyy);
    
    printf("You entered the date %d/%d/%d", yyyy, mm, dd);

    return 0;
}