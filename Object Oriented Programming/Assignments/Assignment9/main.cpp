#include <iostream>
#include "TV.h"

using namespace std;

float* calculatePrice(string* _displayTech, int _screenSize);

int main()
{
    TV tv_1;
    cout << "*****1. TV*****" << endl;
    tv_1.display();
    cout << "Price: " << *calculatePrice(tv_1.getDisplayTech(), tv_1.getScreenSize()) << endl;
    
    TV tv_2("LED", "HDMI", 60, 32);
    cout << "*****2. TV*****" << endl;
    tv_2.display();
    cout << "Price: " << *calculatePrice(tv_2.getDisplayTech(), tv_2.getScreenSize()) << endl;
    
    return 0;
}

float* calculatePrice(string* _displayTech, int _screenSize){
    float* price = new float;
    
    if (*_displayTech == "LED" && _screenSize >= 32) {
        *price = 12500;
    }
    else if (*_displayTech == "undefined") {
        *price = 0;
    }
    else {
        *price = 10000;
    }
    
    return price;
}
