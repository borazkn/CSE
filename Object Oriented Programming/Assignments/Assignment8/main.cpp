#include <iostream>
#include "Smartwatch.h"

using namespace std;

int main()
{
    Smartwatch sw;
    Tech robotVacuum("125aT13", "IRobot", "Roomba", 12, 8900, 2, 3.5, "Wi-Fi");
    cout << "*****Load Product*****" << endl;
    sw.loadProduct();
    cout << "****Display*****" << endl;
    sw.display();
    cout << "****Display*****" << endl;
    robotVacuum.display();
    cout << "*****Headphone Product Part*****" << endl;
    robotVacuum.Product::display();
    
    return 0;
}
