#include "product.h"

SmartWatch::SmartWatch(){
    screenSize = 0.0;
    bandMaterial = "undefined";
    bandColor = "undefined";
    connectivityTech = "undefined";
    gps = NULL;
}

SmartWatch::SmartWatch(float p_screenSize, std::string p_bandMaterial, std::string p_bandColor, std::string p_connectivityTech){
    screenSize = p_screenSize;
    bandMaterial = p_bandMaterial;
    bandColor = p_bandColor;
    connectivityTech = p_connectivityTech;
}

SmartWatch::~SmartWatch(){
    std::cout << "Destructor" << std::endl;
}

float SmartWatch::getScreenSize(){
    return screenSize;
}

void SmartWatch::setScreenSize(float p_screenSize){
    screenSize = p_screenSize;
}

std::string SmartWatch::getBandMaterial(){
    return bandMaterial;
}

void SmartWatch::setBandMaterial(std::string p_bandMaterial){
    bandMaterial = p_bandMaterial;
}

std::string SmartWatch::getBandColor(){
    return bandColor;
}

void SmartWatch::setBandColor(std::string p_bandColor){
    bandColor = p_bandColor;
}

std::string SmartWatch::getConnectivity(){
    return connectivityTech;
}

void SmartWatch::setConnectivity(std::string p_connectivityTech){
    connectivityTech = p_connectivityTech;
}

bool SmartWatch::getGPS(){
    return gps;
}

void SmartWatch::setGPS(bool p_gps){
    gps = p_gps;
}

void SmartWatch::display(){
    std::cout << "Screen Size: " << getScreenSize() << std::endl;
    std::cout << "Band Material: " << getBandMaterial() << std::endl;
    std::cout << "Band Color: " << getBandColor() << std::endl;
    std::cout << "Connectivity Tech: " << getConnectivity() << std::endl;
    std::cout << "Gps: " << getGPS() << std::endl;
}

void SmartWatch::loadSmartWatch(){
    float ss;
    std::string bm,bc,ct;
    bool gp;
    
    std::cout << "Enter screen size: ";
    std::cin >> ss;
    setScreenSize(ss);
    std::cout << "Enter band material: ";
    std::cin >> bm;
    setBandMaterial(bm);
    std::cout << "Enter band color: ";
    std::cin >> bc;
    setBandColor(bc);
    std::cout << "Enter connectivity: ";
    std::cin >> ct;
    setConnectivity(ct);
    std::cout << "Enter gps(0-1): ";
    std::cin >> gp;
    setGPS(gp);
}

bool List::isEmpty(){
    return -1;
}

void List::addNewSmartWatch(SmartWatch watch){
    smartwatches[size] = watch;
    ++size;
}

void List::removeSmartWatch(int index){
    if ((index < 0) && (index > MAX_SIZE)) {
        std::cout << "wrong index" << std::endl;
    }
    else {
        smartwatches[index] = SmartWatch();
        --size;
    }
}

void List::displaySmartWatches(){
    for (int i = 0; i < size; i++) {
        smartwatches[i].display();
    }
}

List::List(){
    size = 0;
}

List::~List(){
    std::cout << "Destructor" << std::endl;
}