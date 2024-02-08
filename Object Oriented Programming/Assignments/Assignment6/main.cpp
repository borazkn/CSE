#include <iostream>
#include "product.h"

using namespace std;

int main()
{
    SmartWatch smartwatch;
    List list;
    
    int s, index = 0;
    
    while(true){
        cout << "1-Add New Smart watch" << endl;
        cout << "2-Remove Smart Watch" << endl;
        cout << "3-Show Smart Watches" << endl;
        cout << "4-Exit" << endl;
        cin >> s;
        switch (s) {
            case 1:
                smartwatch.loadSmartWatch();
                list.addNewSmartWatch(smartwatch);
                break;
            case 2:
                cout << "Enter index: ";
                cin >> index;
                list.removeSmartWatch(index);
                break;
            case 3:
                list.displaySmartWatches();
                break;
            case 4: exit(0); break;
        }
    }
    
    return 0;
}