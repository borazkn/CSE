#pragma once

#include <iostream>

#define MAX_SIZE 5

class SmartWatch{
private:
    float screenSize;
    std::string bandMaterial;
    std::string bandColor;
    std::string connectivityTech;
    bool gps;
public:
    SmartWatch();
    SmartWatch(float p_screenSize, std::string p_bandMaterial, std::string p_bandColor, std::string connectivityTech);
    ~SmartWatch();
    float getScreenSize();
    void setScreenSize(float p_screenSize);
    std::string getBandMaterial();
    void setBandMaterial(std::string p_bandMaterial);
    std::string getBandColor();
    void setBandColor(std::string p_bandColor);
    std::string getConnectivity();
    void setConnectivity(std::string p_connectivityTech);
    bool getGPS();
    void setGPS(bool p_gps);
    void display();
    void loadSmartWatch();
};

class List{
private:
    SmartWatch smartwatches[MAX_SIZE];
    int size;
public:
    bool isEmpty();
    void addNewSmartWatch(SmartWatch watch);
    void removeSmartWatch(int index);
    void displaySmartWatches();
    List();
    ~List();
};