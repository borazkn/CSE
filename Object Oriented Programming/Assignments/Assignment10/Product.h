#pragma once

#include <iostream>

class Computer {
protected:
    float* screenSize;
    int* storage;
    std::string* os;
public:
    Computer(){
        screenSize = nullptr;
        storage = nullptr;
        os = nullptr;
    }
    Computer(float _screenSize, int _storage, std::string _os){
        std::cout << "Cons with parameter - Computer" << std::endl;
        screenSize = new float(_screenSize);
        storage = new int(_storage);
        os = new std::string(_os);
    }
    virtual ~Computer(){
        std::cout << "Dest - Computer" << std::endl;
        if (screenSize != nullptr)
            delete screenSize;
        if (storage != nullptr)
            delete storage;
        if (os != nullptr)
            delete os;
    }
    Computer(const Computer& computer){
        screenSize = new float(*computer.screenSize);
        storage = new int(*computer.storage);
        os = new std::string(*computer.os);
    }
    const float& getScreenSize() const{return *this->screenSize;}
    const int& getStorage() const{return *this->storage;}
    const std::string& getOs() const{return *this->os;}
    
    void setScreenSize(float* _screenSize){
        if (screenSize != nullptr)
            delete screenSize;
        screenSize = new float(*_screenSize);
    }
    void setStorage(int* _storage){
        if(storage != nullptr)
            delete storage;
        storage = new int(*_storage);
    }
    void setOs(std::string *_os){
        if(os != nullptr)
            delete os;
        os = new std::string(*os);
    }
    virtual void displayComputer() = 0;
};

class Tablet : public Computer{
private:
    std::string* wirelessType;
    std::string* battery;
public:
    Tablet(){
        wirelessType = nullptr;
        battery = nullptr;
    }
    Tablet(float _screenSize, int _storage, std::string _os, std::string _wirelessType, std::string _battery):Computer(_screenSize, _storage, _os){
        std::cout << "Cons with parameter - Tablet" << std::endl;
        wirelessType = new std::string(_wirelessType);
        battery = new std::string(_battery);
    }
    Tablet(const Tablet& tablet){
        screenSize = new float(*tablet.screenSize);
        storage = new int(*tablet.storage);
        os = new std::string(*tablet.os);
        
        wirelessType = new std::string(*tablet.wirelessType);
        battery = new std::string(*tablet.battery);
    }
    ~Tablet(){
        std::cout << std::endl << "Dest - Tech" << std::endl;
        if (wirelessType != nullptr)
            delete wirelessType;
        if (battery != nullptr)
            delete battery;
    }
    const std::string getWirelessType() const{return *this->wirelessType;}
    const std::string getBattery() const{return *this->battery;}
    
    void setWirelessType(std::string* _wirelessType){
        if (wirelessType != nullptr)
            delete wirelessType;
        wirelessType = new std::string(*_wirelessType);
    }
    void setBattery(std::string* _battary){
        if (battery != nullptr)
            delete battery;
        battery = new std::string(*_battary);
    }
    void displayComputer(){
        std::cout << std::endl << "Screen Size: " << getScreenSize() << std::endl;
        std::cout << "Storage: " << getStorage() << std::endl;
        std::cout << "Os:" << getOs() << std::endl;
        std::cout << "Battery: " << getBattery() << std::endl;
        std::cout << "Wireless Type: " << getWirelessType() << std::endl;
    }
};