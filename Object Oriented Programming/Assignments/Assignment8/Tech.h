#pragma once
#include "Product.h"

class Tech : public Product{
private:
    float weight;
    float chargingTime;
    std::string connectivity;
public:
    Tech(){
        std::cout << "Default Constructor - Tech" << std::endl;
        weight = 0.0;
        chargingTime = 0.0;
        connectivity = "undefined";
    }
    Tech(std::string _productCode, std::string _brand, std::string _name, double _price, int _stock, float _weight, float _chargingTime, std::string _connectivity):Product(_productCode, _brand, _price, _name, _stock){
        std::cout << "Constructor with parameter - Product" << std::endl;
        weight = _weight;
        chargingTime = _chargingTime;
        connectivity = _connectivity;
    }
    ~Tech(){
        std::cout << "Destructor - Tech" << std::endl;
    }
    float getWeight(){return weight;}
    float getChargingTime(){return chargingTime;}
    std::string getConnectivity(){return connectivity;}
    
    void setWeight(float _weight){weight = _weight;}
    void setChargingTime(float _chargingTime){chargingTime = _chargingTime;}
    void setConnectivity(std::string _connectivity){connectivity = _connectivity;}
    
    void display(){
        Product::display();
        std::cout << "Weight: " << getWeight() <<std::endl;
        std::cout << "Charging Time: " << getChargingTime() << std::endl;
        std::cout << "Connectiviy: " << getConnectivity() << std::endl;
        std::cout << "\n\n\n";
    }
    
    void loadProduct(){
        Product::loadProduct();
        float w, ct;
        std::string c;
        std::cout << "Weight: ";
        std::cin >> w;
        setWeight(w);
        std::cout << "Charging Time: ";
        std::cin >> ct;
        setChargingTime(ct);
        std::cout << "Connectivity: ";
        std::cin >> c;
        setConnectivity(c);
    }
};
