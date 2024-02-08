#pragma once
#include <iostream>

class Product{
protected:
    std::string productCode;
    std::string brand;
    double price;
    std::string name;
    int stock;
public:
    Product(){
        std::cout << "Default Constructor - Product" << std::endl;
        productCode = "undefined";
        brand = "undefined";
        price = 0.0;
        name = "undefined";
        stock = 0;
    }
    Product(std::string _productCode, std::string _brand, double _price, std::string _name, int _stock){
        std::cout << "Constructor with parameter - Product" << std::endl;
        productCode = _productCode;
        brand = _brand;
        price = _price;
        name = _name;
        stock = _stock;
    }
    ~Product(){
        std::cout << "Destructor - Product" << std::endl;
    }
    std::string getProductCode(){return productCode;}
    std::string getBrand(){return brand;}
    double getPrice(){return price;}
    std::string getName(){return name;}
    int getStock(){return stock;}
    
    void setProductCode(std::string _productCode){productCode = _productCode;}
    void setBrand(std::string _brand){brand = _brand;}
    void setPrice(double _price){price = _price;}
    void setName(std::string _name){name = _name;}
    void setStock(int _stock){stock = _stock;}
    
    void display(){
        std::cout << "\n\n\n";
        std::cout << "Product Code: " << getProductCode() << std::endl;
        std::cout << "Brand: " << getBrand() << std::endl;
        std::cout << "Price: " << getPrice() << std::endl;
        std::cout << "Name: " << getName() << std::endl;
        std::cout << "Stock: " << getStock() << std::endl;
    }
    
    void loadProduct(){
        std::string pd, b, n;
        double p;
        int s;
        std::cout << "Product Code: ";
        std::cin >> pd;
        setProductCode(pd);
        std::cout << "Brand: ";
        std::cin >> b;
        setBrand(b);
        std::cout << "Price: ";
        std::cin >> p;
        setPrice(p);
        std::cout << "Name : ";
        std::cin >> n;
        setName(n);
        std::cout << "Stock: ";
        std::cin >> s;
        setStock(s);
    }
};