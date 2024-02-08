#include <iostream>

#define ARRAY_SIZE 9

using namespace std;

void sorting_list(int arr[]);
void filter_list(int arr[], int price);

int main()
{
	int price_list[] = {250,140,80,70,1200,450,325,500,2450};	
	int price;

	cout << "Enter max price for products in catalog: ";
	cin >> price;

	sorting_list(price_list);
	filter_list(price_list, price);

	return 0;
}

void sorting_list(int arr[]){
	int keep;
	for(int i = 0; i < ARRAY_SIZE; i++){
		for(int j = (i + 1); j < ARRAY_SIZE; j++){
			if(arr[j] < arr[i]){
				keep = arr[i];
				arr[i] = arr[j];
				arr[j] = keep;
			}
		}
	}
}

void filter_list(int arr[], int price){
	if(price < arr[0]) {
		cout << "Sorry! There is no product in the given range." << endl;
		exit(0);
	}
	for(int i = 0; i < ARRAY_SIZE; i++){
		if(price >= arr[i])
			cout << "Product found in the given price range. Product price: " << arr[i] << endl;
	}
}