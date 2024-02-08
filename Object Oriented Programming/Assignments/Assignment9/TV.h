#pragma once
#include <string>
#include <iostream>

class TV {
private:
    std::string *displayTech;
    int refreshRate;
    std::string connectiviy;
    int screenSize;
public:
    TV(){
        displayTech = new std::string;
        *displayTech = "undefined";
        refreshRate = 0;
        connectiviy = "undefined";
        screenSize = 0;
    }
    TV(std::string _displayTech, std::string _connectiviy, int _refreshRate, int _screenSize){
        displayTech = new std::string;
        *displayTech = _displayTech;
        refreshRate = _refreshRate;
        connectiviy = _connectiviy;
        screenSize = _screenSize;
    }
    ~TV(){
        
    }
    std::string* getDisplayTech(){return displayTech;}
    void setDisplayTech(std::string *_displayTech){
        *displayTech = *_displayTech;
    }
    int getRefreshRate(){return refreshRate;}
    void setRefreshRate(int _refreshRate){
        refreshRate = _refreshRate;
    }
    std::string getConnectivity(){return connectiviy;}
    void setConnectivity(std::string _connectiviy){connectiviy = _connectiviy;}
    int getScreenSize(){return screenSize;}
    void setScreenSize(int _screenSize){screenSize = _screenSize;}
    void display(){
        std::cout << "Display Tech: " << *getDisplayTech() << std::endl;
        std::cout << "Refresh Rate: " << getRefreshRate() << std::endl;
        std::cout << "Connectiviy: " << getConnectivity() << std::endl;
        std::cout << "Screen Size: " << getScreenSize() << std::endl;
    }
};
