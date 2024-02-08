#include <iostream>
#include "Product.h"

using namespace std;

int main()
{
    cout << "*****Tablet 1*****" << endl;
    Tablet samsung(10, 64, "Android 11", "Bluetooth", "1 Lithium Polymer");
    samsung.displayComputer();
    
    cout << "*****Pointer Tablet*****" << endl;
    Computer *ptrtablet = new Tablet(8, 32, "Android 9 Pie", "Wi-Fi", "1 CR123A");
    ptrtablet->displayComputer();
    
    delete ptrtablet;
    
    cout << "*****Tablet 2 Copy Constructor*****" << endl;
    Tablet samsung2 = samsung;
    samsung2.displayComputer();
    
    return 0;
}