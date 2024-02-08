#include <iostream>

using namespace std;

namespace dress{
enum color{white = 1, black, red, blue};
color mycolor;
char ch;
int clr, stock;
string len;
    void display(){
        mycolor = static_cast<color>(clr);
        cout << "******************************\n";
        cout << "Size of dress: " << ch << endl;
        cout << "Color of dress: " << mycolor << endl;
        cout << "Lenght of dress: " << len << endl;
        cout << "Stock: " << stock << endl;
        cout << "******************************\n";
    }
}

namespace accessory{
string kind, metarial;
int stock;
    void display(){
        cout << "******************************\n";
        cout << "Kind of accessory: " << kind << endl;
        cout << "Metarial of accessory: " << metarial << endl;
        cout << "Stock: " << stock << endl;
        cout << "******************************\n";
    }
}

int main()
{
    cout << "******************************Dress******************************\n";
    cout << "Enter size of dress (S,M,L): ";
    cin >> dress::ch;
    cout << "Enter color of dress (while = 1, black = 2, red = 3, blue = 4): ";
    cin >> dress::clr;
    cout << "Enter lenght of dress (mini,midi,maxi): ";
    cin >> dress::len;
    cout << "Enter stock of dress: ";
    cin >> dress::stock;
    cout << "******************************Accessory******************************\n";
    cout << "Enter kind of accessory (Ring, Necklace, Earring): ";
    cin >> accessory::kind;
    cout << "Enter metarial of accessory (Gold, Silver): ";
    cin >> accessory::metarial;
    cout << "Enter stock of accessory: ";
    cin >> accessory::stock;
    
    cout << "\n\n\n" << endl;
    dress::display();
    cout << "\n\n\n" << endl;
    accessory::display();
    
    return 0;
}