#include <stdio.h>

void quicksort(int arr[], int low, int high);
int split(int arr[], int low, int high);

int main()
{
    int array[10];
    
    printf("Enter 10 numbers to be sorted: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    quicksort(array, 0, 9);

    printf("In sorted order: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}

void quicksort(int arr[], int low, int high) {
    if(low < high) {
        int pi = split(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int split(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}
