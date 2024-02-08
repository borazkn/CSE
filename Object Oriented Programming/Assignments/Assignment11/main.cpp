#include <iostream>
#include "Product.h"

using namespace std;

int main()
{
    Computer computers[5] = {Computer("123A456", "HP", 25000, 15, 13.3, 256),
                            Computer("345A456", "ASUS", 21650, 5, 13.3, 128),
                            Computer("678A456", "Dell", 35045, 20, 15, 256),
                            Computer("912A456", "Lenovo", 22000, 3, 13.3, 128),
                            Computer("123A987", "Acer", 18050, 25, 13.3, 128)};
    
    std::string name;
    double price;
    float screenSize;
    int storage;
    int choose;
    
    do{
        cout << "1-Search" << endl;
        cout << "2-Exit" << endl;
        cin >> choose;
        switch (choose) {
            case 1:
                cout << "Enter computer information to search: ";
                cin >> name >> price >> screenSize >> storage;
                Computer n_comp("", name, price, 0, screenSize, storage);
                for (int i = 0; i < 5; i++) {
                    if (n_comp.operator==(computers[i])) {
                        cout << "Computer Found!" << endl;
                        computers[i].display();
                    }
                }
                break;
            case 2:
                exit(0);
                break;
        }
    }while(true);
    
    return 0;
}