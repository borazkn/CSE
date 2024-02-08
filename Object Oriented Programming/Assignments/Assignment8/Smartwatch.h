#pragma once

#include "Tech.h"

class Smartwatch : public Tech{
private:
    std::string bandMaterial;
    std::string bandColor;
    float screenSize;
public:
    Smartwatch(){
        std::cout << "Constructor - Smartwatch" << std::endl;
        bandMaterial = "undefined";
        bandColor = "undefined";
        screenSize = 0.0;
    }
    Smartwatch(std::string _bandMaterial, std::string _bandColor, float _screenSize){
        std::cout << "Constructor with Parameter - smartwatch" << std::endl;
        bandMaterial = _bandMaterial;
        bandColor = _bandColor;
        screenSize = _screenSize;
    }
    ~Smartwatch(){
        std::cout << "Destructor - Smartwatch" << std::endl;
    }
    std::string getBandMaterial(){return bandMaterial;}
    void setBandMaterial(std::string _bandMaterial){bandMaterial = _bandMaterial;}
    std::string getBandColor(){return bandColor;}
    void setBandColor(std::string _bandColor){bandColor = _bandColor;}
    float getScreenSize(){return screenSize;}
    void setScreenSize(float _screenSize){screenSize = _screenSize;}
    void display(){
        Tech::display();
        std::cout << "Band Material: " << getBandMaterial() << std::endl;
        std::cout << "Band Color: " << getBandColor() << std::endl;
        std::cout << "Screen Size: " << getScreenSize() << std::endl;
    }
    void loadProduct(){
        Tech::loadProduct();
        std::string bm, bc;
        float ss;
        std::cout << "Enter Band Material: ";
        std::cin >> bm;
        setBandMaterial(bm);
        std::cout << "Enter Band Color: ";
        std::cin >> bc;
        setBandColor(bc);
        std::cout << "Enter Screen Size: ";
        std::cin >> ss;
        setScreenSize(ss);
    }
};
