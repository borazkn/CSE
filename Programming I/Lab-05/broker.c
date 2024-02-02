#include <stdio.h>

int main()
{
    int number_of_shares;
    float price_per_shares, broker, rival_broker;
    printf("Enter number of shares: ");
    scanf("%d", &number_of_shares);
    printf("Enter price per share: ");
    scanf("%f", &price_per_shares);

    broker = 0; //Need to calculate broker's commission

    rival_broker = number_of_shares < 2000 ? number_of_shares * 0.03 + 33.00 : number_of_shares * 0.02 + 33.00;

    printf("Broker's commission: $%.2f\n", broker);
    printf("Rival broker's commission: $%.2f\n", rival_broker);

    return 0;
}