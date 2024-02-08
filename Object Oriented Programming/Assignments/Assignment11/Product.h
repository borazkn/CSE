#pragma once

#include <iostream>

class Product {
protected:
    std::string productCode;
    std::string name;
    double price;
    int stock;
public:
    Product(){
        productCode = "undefined";
        name = "undefined";
        price = 0.0;
        stock = 0;
    }
    Product(std::string _productCode, std::string _name, double _price, int _stock){
        productCode = _productCode;
        name = _name;
        price = _price;
        stock = _stock;
    }
    std::string getProductCode(){return productCode;}
    std::string getName(){return name;}
    double getPrice(){return price;}
    int getStock(){return stock;}
    
    void setProductCode(std::string _productCode){
        productCode = _productCode;
    }
    void setName(std::string _name){
        name = _name;
    }
    void setPrice(double _price){
        price = _price;
    }
    void setStock(int _stock){
        stock = _stock;
    }
    
    virtual void display() = 0;
};

class Computer : public Product {
private:
    float screenSize;
    int storage;
public:
    Computer(){
        screenSize = 0.0;
        storage = 0;
    }
    Computer(std::string _productCode, std::string _name, double _price, int _stock, float _screenSize, int _storage):Product(_productCode, _name, _price, _stock){
        screenSize = _screenSize;
        storage = _storage;
    }
    bool operator==(Computer& comp){
        if (name == comp.name && price == comp.price && screenSize == comp.screenSize && storage == comp.storage) {
            return true;
        }
        else
            return false;
    }
    friend bool operator==(Computer& comp1, Computer& comp2);
    
    float getScreenSize(){return screenSize;}
    int getStorage(){return storage;}
    
    void setScreenSize(float _screenSize){
        screenSize = _screenSize;
    }
    void setStorage(int _storage){
        storage = _storage;
    }
    
    int getStock(){
        return stock;
    }
    void display(){
        std::cout << "Product Code:" << getProductCode() << std::endl;
        std::cout << "Name: " << getName() << std::endl;
        std::cout << "Price: " << getPrice() << std::endl;
        std::cout << "Stock: " << getStock() << std::endl;
        std::cout << "Screen Size: " << getScreenSize() << std::endl;
        std::cout << "Storage: " << getStorage() << std::endl;
    }
};