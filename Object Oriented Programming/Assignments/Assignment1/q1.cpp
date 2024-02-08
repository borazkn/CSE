#include <iostream>

using namespace std;

int main() {
    int x, y;
    char c;
    
    cout << "Enter Number: ";
    cin >> x;
    
    for (int i = 1; i <= 9; i++) {
        cout << x << " * " << i << " = ";
        cin >> y;
        if (x * i != y) {
            cout << "Wrong answer ..." << endl;
            cout << "Correct answer: " << x * i << endl;
            cout << "Would you like to continue? (y/n): ";
            cin >> c;
            if (c != 'y') {
                break;
            }
        }
    }
    
    return 0;
}