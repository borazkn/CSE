//Bora Erol Ozkan
//2000004345

#include <iostream>
#include "Product.h"
#include "Cart.h"

using namespace std;

int main()
{
    Product* musics[] = {
        new Music("Consciousness", "English", "Techno", "Rave", 267, 9.99, "MM76601", "Anyma", "mp3", 4.35),
        new Music("Sevilla", "English", "Techno", "Rave", 176, 7.99, "MM76602", "Henrique Camacho", "mp3", 5.52),
        new Music("Universo", "English", "Techno", "Rave", 145, 7.99, "MM76603", "Astrix", "mp3", 10.07),
        new Music("Kuzu Kuzu", "Turkish", "Pop", "Pop", 425, 5.99, "MM10401", "Tarkan", "mp3", 3.54),
        new Music("What I've Done", "English", "Rock", "Altervative-Rock", 1342, 9.99, "MM50001", "Linkin Park", "mp3", 3.26)
    };
    Product* books[] = {
        new Book("1984", "Turkish", "Utopia", "Science Fiction", 17, 35, "B100B1", "can", "9789750718533"),
        new Book("The Scarlet Plague", "English", "Thriller", "Science Fiction", 3, 10, "B991B1", "literart", "978605991340"),
        new Book("Milena'ya Mektuplar", "Turkish", "Novel", "Love", 8, 22, "B100B2", "OLIMPOS", "9876057906434"),
        new Book("Korluk", "Turkish", "Fantastic", "Science Fiction", 14, 35, "B100B3", "KIRMIZIKEDI", "987605298081")
    };
    Product* movies[] = {
        new Movie("Shutter Island", "English", "Thriller", "Fantastic", 36, 35, "M0001M1", "Martin Scorsese", "", "Leonardo DiCaprio", "Mark Ruffalo", "Ben Kingsley", "Arabic, English, Russian, Turkish", "English, Turkish"),
        new Movie("Dunkirk", "English", "Thriller", "Action", 19, 25, "M0001M2", "Christopher Nolan", "", "Harry Styles", "Fionn Whitehead", "Cillian Murphy", "English, Turkish", "English"),
        new Movie("Once Upon A Time In Hollywood", "English", "Dram", "Comedy", 28, 35, "M0001M3", "Quentin Tarantino", "", "Leonardo DiCaprio", "Brad Pitt", "Margot Robbie", "English", "English")
    };
    
    Cart customer_cart;
    
    char login, ok;
    int select, th;
    
    login = getchar();
    
    do{
        if (login == '*') {
            cout << "1. Update Product Information" << endl;
            cout << "2. Exit" << endl;
            cin >> select;
            if (select == 1) {
                cout << "1. Book" << endl;
                cout << "2. Movie" << endl;
                cout << "3. Music" << endl;
                cout << "4. Exit" << endl;
                cin >> select;
                switch (select) {
                    case 1:
                        for (int i = 0; i < size(books); i++) {
                            cout << "***** "<< i+1 << " *****";
                            books[i]->display();
                        }
                        cout << "Choose: ";
                        cin >> th;
                        cout << "1. Update Stock" << endl;
                        cout << "2. Update Price" << endl;
                        cout << "3. Back" << endl;
                        cin >> select;
                        if (select == 1) {
                            int stock;
                            cout << "Enter New Stock: ";
                            cin >> stock;
                            books[th-1]->setStock(&stock);
                            books[th-1]->display();
                        }
                        else if (select == 2){
                            double price;
                            cout << "Enter New Price: ";
                            cin >> price;
                            books[th-1]->setPrice(&price);
                            books[th-1]->display();
                        }
                        break;
                    case 2:
                        for (int i = 0; i < size(movies); i++) {
                            cout << "***** "<< i+1 << " *****";
                            movies[i]->display();
                        }
                        cout << "Choose: ";
                        cin >> th;
                        cout << "1. Update Stock" << endl;
                        cout << "2. Update Price" << endl;
                        cout << "3. Exit" << endl;
                        cin >> select;
                        if (select == 1) {
                            int stock;
                            cout << "Enter New Stock: ";
                            cin >> stock;
                            movies[th-1]->setStock(&stock);
                            movies[th-1]->display();
                        }
                        else if (select == 2){
                            double price;
                            cout << "Enter New Price: ";
                            cin >> price;
                            movies[th-1]->setPrice(&price);
                            movies[th-1]->display();
                        }
                        break;
                    case 3:
                        for (int i = 0; i < size(musics); i++) {
                            cout << "***** "<< i+1 << " *****";
                            musics[i]->display();
                        }
                        cout << "Choose: ";
                        cin >> th;
                        cout << "1. Update Stock" << endl;
                        cout << "2. Update Price" << endl;
                        cout << "3. Exit" << endl;
                        cin >> select;
                        if (select == 1) {
                            int stock;
                            cout << "Enter New Stock: ";
                            cin >> stock;
                            musics[th-1]->setStock(&stock);
                            musics[th-1]->display();
                        }
                        else if (select == 2){
                            double price;
                            cout << "Enter New Price: ";
                            cin >> price;
                            musics[th-1]->setPrice(&price);
                            musics[th-1]->display();
                        }
                        break;
                    case 4:
                        exit(0);
                        break;
                }
            }
            else if (select == 2)
                exit(0);
        }
        else if (login == '\n'){
            cout << "1. View Cart" << endl;
            cout << "2. Select Category" << endl;
            cout << "3. Exit" << endl;
            cin >> select;
            if (select == 1) {
                customer_cart.display();
                if (!customer_cart.isEmpty()) {
                    cout << "1. Confirm the cart" << endl;
                    cout << "2. Remove the product" << endl;
                    cout << "3. Back" << endl;
                    cin >> select;
                    if (select == 1) {
                        cout << "Your order has been successfully confirmed" << endl;
                        customer_cart.ClearCart();
                    }
                    else if(select == 2){
                        cout << "List Number: ";
                        cin >> select;
                        customer_cart.RemoveProductToCart(select-1);
                        customer_cart.display();
                    }
                    else
                        continue;
                }
            }
            else if (select == 2){
                cout << "1. Book" << endl;
                cout << "2. Movie" << endl;
                cout << "3. Music" << endl;
                cout << "4. Exit" << endl;
                cin >> select;
                switch (select) {
                    case 1:
                        for (int i = 0; i < size(books); i++) {
                            cout << "***** "<< i+1 << " *****";
                            books[i]->display();
                        }
                        cout << "Choose: ";
                        cin >> th;
                        customer_cart.AddNewProductToCart(books[th-1]);
                        break;
                    case 2:
                        for (int i = 0; i < size(movies); i++) {
                            cout << "***** "<< i+1 << " *****";
                            movies[i]->display();
                        }
                        cout << "Choose: ";
                        cin >> th;
                        customer_cart.AddNewProductToCart(movies[th-1]);
                        break;
                    case 3:
                        for (int i = 0; i < size(musics); i++) {
                            cout << "***** "<< i+1 << " *****";
                            musics[i]->display();
                        }
                        cout << "Choose: ";
                        cin >> th;
                        customer_cart.AddNewProductToCart(musics[th-1]);
                        break;
                    case 4:
                        exit(0);
                        break;
                }
            }
            else if (select == 3)
                if (!customer_cart.isEmpty()){
                    cout << "Are you sure you want to exit?(y/n): ";
                    cin >> ok;
                    if (ok == 'y') {
                        exit(0);
                    }
                    else
                        continue;
                }
                else {
                    exit(0);
                }
            else
                continue;
        }
    }while(true);
    
    return 0;
}
