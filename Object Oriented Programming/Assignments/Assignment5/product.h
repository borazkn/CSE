#pragma once

#include <iostream>

class Product{
public:
    Product();
    Product(std::string prproductCode, std::string prbrand, double prprice, std::string prname, int prstock);
    std::string getProductCode();
    void setProductCode(std::string prproductCode);
    std::string getBrand();
    void setBrand(std::string prbrand);
    double getPrice();
    void setPrice(double prprice);
    std::string getName();
    void setName(std::string prname);
    int getStock();
    void setStock(int prstock);
    void display();
private:
    std::string productCode;
    std::string brand;
    double price;
    std::string name;
    int stock;
};