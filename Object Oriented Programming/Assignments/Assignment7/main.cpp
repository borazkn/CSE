#include <iostream>
#include "Tech.h"

using namespace std;

int main()
{
    Tech techPro;
    Tech techPro2("E4325TC","A", 20560, "headphone", 5, 0.5, 2.5, "Bluetooth 5.0");
    techPro.setStock(14);
    techPro.setProductCode("4T5672");
    techPro.setName("smart watch");
    techPro.setBrand("B");
    techPro.setChargingTime(1.5);
    techPro.display();
    techPro2.display();
    Tech techPro3;
    techPro3.loadProduct();
    techPro3.display();
    
    return 0;
}