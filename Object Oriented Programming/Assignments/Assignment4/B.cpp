#include <iostream>

#define CAPACITY 5

using namespace std;

struct tech{
	int product_code;
	string brand;
	string model;
	float price;
	float screen_size;
	int storage;
}tech[CAPACITY];

struct fashion{
	int product_code;
	string brand;
	string model;
	int price;
	char size;
	char gender;
}fashion[CAPACITY];

int tech_capacity = 0;
int fashion_capacity = 0;

void menu();
void add_tech();
void add_fashion();
void display_tech();
void display_fashion();
void display_all();
int control_tech_products(int code);
int control_fashion_products(int code);

int main()
{
	while(true)
		menu();

	return 0;
}

void menu(){
	int s;
	cout << "******************************" << endl;
	cout << "1.Add new tech product" << endl;
	cout << "2.Add new product to fashion category" << endl;
	cout << "3.Display tech products info" << endl;
	cout << "4.Display products of fashion category" << endl;
	cout << "5.Display all products" << endl;
	cout << "6.Exit" << endl;
	cin >> s;	
	switch(s){
	case 1: add_tech(); break;
	case 2:	add_fashion(); break;
	case 3:	display_tech(); break;
	case 4:	display_fashion(); break;
	case 5: display_all(); break;
	case 6: exit(0);
	default: cout << "Wrong Value" << endl;
	}
}

void add_tech(){
	cout << "Enter the product code: ";
	cin >> tech[tech_capacity].product_code;
	if(control_tech_products(tech[tech_capacity].product_code) == 1){
		cout << "Enter the brand: ";
		cin >> tech[tech_capacity].brand;
		cout << "Enter the model: ";
		cin >> tech[tech_capacity].model;
		cout << "Enter the price: ";
		cin >> tech[tech_capacity].price;
		cout << "Enter the screen size: ";
		cin >> tech[tech_capacity].screen_size;
		cout << "Enter the storage: ";
		cin >> tech[tech_capacity].storage;
		tech_capacity++;
	}
}

void add_fashion(){
	cout << "Enter the product code: ";
	cin >> fashion[fashion_capacity].product_code;
	if(control_fashion_products(fashion[fashion_capacity].product_code) == 1){
		cout << "Enter the brand: ";
		cin >> fashion[fashion_capacity].brand;
		cout << "Enter the model: ";
		cin >> fashion[fashion_capacity].model;
		cout << "Enter the price: ";
		cin >> fashion[fashion_capacity].price;
		cout << "Enter the size: ";
		cin >> fashion[fashion_capacity].size;
		cout << "Enter the gender: ";
		cin >> fashion[fashion_capacity].gender;
		fashion_capacity++;
	}
}

void display_tech(){
	for(int i = 0; i < tech_capacity; i++){
		cout << "******************************" << endl;
		cout << "Product code: " << tech[i].product_code << endl;
		cout << "Brand: " << tech[i].brand << endl;
		cout << "Model: " << tech[i].model << endl;
		cout << "Price: " << tech[i].price << endl;
		cout << "Screen size: " << tech[i].screen_size << endl;
		cout << "Storage: " << tech[i].storage << endl;
	}
}

void display_fashion(){
	for(int i = 0; i < fashion_capacity; i++){
		cout << "******************************" << endl;
		cout << "Product code: " << fashion[i].product_code << endl;
		cout << "Brand: " << fashion[i].brand << endl;
		cout << "Model: " << fashion[i].model << endl;
		cout << "Price: " << fashion[i].price << endl;
		cout << "Size " << fashion[i].size << endl;
		cout << "Gender: " << fashion[i].gender << endl;
	}
}

void display_all(){
	display_tech();
	display_fashion();
}

int control_tech_products(int code){
	for(int i = 0; i < tech_capacity; i++){
		if(code == tech[i].product_code){
			cout << "There is this product" << endl;
			return -1;
		}
	}
	return 1;
}

int control_fashion_products(int code){
	for(int i = 0; i < fashion_capacity; i++){
		if(code == fashion[i].product_code){
			cout << "There is this product" << endl;
			return -1;
		}
	}
	return 1;
}