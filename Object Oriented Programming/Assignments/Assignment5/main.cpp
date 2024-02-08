#include <iostream>
#include "product.h"

using namespace std;

int main()
{
    Product product;
    
    int s, stock = 0;
    string product_code, brand, name;
    double price = 0.0;
    
    while(true){
        cout << "******************************" << endl;
        cout << "1.Enter product information" << endl;
        cout << "2.Update stock" << endl;
        cout << "3.Update price" << endl;
        cout << "4.Display product Code" << endl;
        cout << "5.Display all info" << endl;
        cout << "6.Exit" << endl;
        cout << "******************************" << endl;
        cout << "--->";
        cin >> s;
        switch (s) {
            case 1:
                cout << "Enter product code: ";
                cin >> product_code;
                product.setProductCode(product_code);
                cout << "Brand: ";
                cin >> brand;
                product.setBrand(brand);
                cout << "Price: ";
                cin >> price;
                product.setPrice(price);
                cout << "Name: ";
                cin >> name;
                product.setName(name);
                cout << "Stock: ";
                cin >> stock;
                product.setStock(stock);
                break;
            case 2:
                cout << "Update stock: ";
                cin >> stock;
                product.setStock(stock);
                break;
            case 3:
                cout << "Update price: ";
                cin >> price;
                product.setPrice(price);
                break;
            case 4:
                cout << "Product code: " << product.getProductCode() << endl;
                break;
            case 5:
                cout << "Product Code: " << product.getProductCode() << endl;
                cout << "Brand: " << product.getBrand() << endl;
                cout << "Price: " << product.getPrice() << endl;
                cout << "Name: " << product.getName() << endl;
                cout << "Stock: " << product.getStock() << endl;
                break;
            case 6:
                exit(0);
        }
    }
    
    return 0;
}