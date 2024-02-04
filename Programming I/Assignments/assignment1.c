#include <stdio.h>

int main()
{
    printf("Product     Product Number  List Price\n");
    printf("Pen                1        $10.00\n");
    printf("Pencil             2        $6.15\n");
    printf("Notebook           3        $14.00\n");
    printf("Rubber             4        $3.50\n");
    printf("Pencil Case        5        $20.05\n");
    printf("\n\n\n");
    printf("Amount                      Discount\n");
    printf("Between 2 and 4                 5%%\n");
    printf("Between 5 and 9                 10%%\n");
    printf("Higher than 10                  15%%\n");
    printf("\n\n\n");

    int product_number, quantity;
    float total;
    
    printf("Enter the product number (1 for pen, 2 for pencil, 3 for notebook, 4 for rubber, 5 for pencil case): ");
    scanf("%d", &product_number);
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    switch(product_number) {
        case 1:
            total = quantity * 10.00f;
            break;
        case 2:
            total = quantity * 6.15f;
            break;
        case 3:
            total = quantity * 14.00f;
            break;
        case 4:
            total = quantity * 3.50f;
            break;
        case 5:
            total = quantity * 20.05f;
            break;
    }

    if(quantity > 2 && quantity <= 4)
        total = total * 0.95;
    if(quantity > 4 && quantity <=9)
        total = total * 0.90;
    if(quantity > 9)
        total = total * 0.85;

    printf("The total is $%.2f", total);

    return 0;
}