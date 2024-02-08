#include <iostream>

using namespace std;

float check_tiprate(float tip_rate){
    
    if (tip_rate <= 0)
        tip_rate = 10;

    return tip_rate;
}

int check_numberofperson(int number_of_person){
    
    if (number_of_person <= 0)
        number_of_person = 1;
    
    return number_of_person;
}

float calculate(float amount, float tip_rate){
    
    float account;
    
    account = amount * tip_rate / 100;
    
    return account;
}

int main()
{
    float amount, tip_rate, account;
    int number_of_person;
    
    cout << "Enter Account Amont: ";
    cin >> amount;
    cout << "Enter Tip Rate: ";
    cin >> tip_rate;
    cout << "Number of Person: ";
    cin >> number_of_person;
    
    tip_rate = check_tiprate(tip_rate);
    number_of_person = check_numberofperson(number_of_person);
    account = calculate(amount, tip_rate);
    
    cout << "Account " << amount << "->tip(" << tip_rate << "%, " << number_of_person << " person): " << account << endl;
    
    return 0;
}