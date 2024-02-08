#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int number, guess_number;
    
    srand(unsigned(time(0)));
    
    guess_number = rand() % 9 + 1;
    
    cout << "We kept a number between 1-10. Can you guess the number?" << endl;
    
    for (int i = 1;;i++) {
        cout << "Your Prediction: ";
        cin >> number;
        
        if (number == guess_number) {
            cout << "Correct Guess! You find it on the " << i << ". try" << endl;
            break;
        }
        else if (number < guess_number) {
            cout << "Smaller" << endl;
        }
        else if (number > guess_number) {
            cout << "Greater " << endl;
        }
    }
    
    return  0;
}