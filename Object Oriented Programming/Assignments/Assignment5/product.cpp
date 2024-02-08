#include "product.h"
#include <iostream>

Product::Product(){
    productCode = "undefined";
    brand = "undefined";
    price = 0.0;
    name = "undefined";
    stock = 0;
}

Product::Product(std::string prproductCode, std::string prbrand, double prprice, std::string prname, int prstock){
    productCode = prproductCode;
    brand = prbrand;
    price = prprice;
    name = prname;
    stock = prstock;
}

std::string Product::getProductCode(){
    return productCode;
}

void Product::setProductCode(std::string prproductCode){
    productCode = prproductCode;
}

std::string Product::getBrand(){
    return brand;
}

void Product::setBrand(std::string prbrand){
    brand = prbrand;
}

double Product::getPrice(){
    return price;
}

void Product::setPrice(double prprice){
    price = prprice;
}

std::string Product::getName(){
    return name;
}

void Product::setName(std::string prname){
    name = prname;
}

int Product::getStock(){
    return stock;
}

void Product::setStock(int prstock){
    stock = prstock;
}