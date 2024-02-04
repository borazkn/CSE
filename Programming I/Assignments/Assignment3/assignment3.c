#include <stdio.h>

float average_odds(int arr[], int arr_size);
float average_evens(int arr[], int arr_size);

int main()
{
    int arr[5];
    float avg_odds, avg_evens;

    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    avg_odds = average_odds(arr, 5);
    avg_evens = average_evens(arr, 5);

    printf("The average of odd(s): %.2f\n", avg_odds);
    printf("The average of even(s): %.2f\n", avg_evens);

    if(avg_odds > avg_evens) {
        printf("The average of odd(s) is greater than average of even(s)\n");
    }
    else {
        printf("The average of odd(s) is less than the average of even(s)\n");
    }

    return 0;
}

float average_odds(int arr[], int arr_size) {
    float avg_odds = 0;
    int odd_counter = 0;

    for(int i = 0; i < arr_size; i++) {
        if(arr[i] % 2 != 0) {
            avg_odds += arr[i];
            odd_counter++;
        }
    }
    return avg_odds / odd_counter;
}

float average_evens(int arr[], int arr_size) {
    float avg_evens = 0;
    int even_counter = 0;

    for(int i = 0; i < arr_size; i++) {
        if(arr[i] % 2 == 0) {
            avg_evens += arr[i];
            even_counter++;
        }
    }
    return avg_evens / even_counter;
}