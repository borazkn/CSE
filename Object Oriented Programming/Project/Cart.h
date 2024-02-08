#ifndef Cart_h
#define Cart_h

#include "Product.h"
#define MAX_LIMIT 5

template <typename T1, typename T2>
double calculator_price(T1 _product_list[], T2 _size){
    double price = 0.0;
    for (int i = 0; i < _size; i++) {
        price += _product_list[i]->calculateDiscount();
    }
    return price;
}

class Cart{
private:
    Product** product_list = new Product*[MAX_LIMIT];
    double total_price;
    int size;
public:
    Cart(){ //Constructor
        total_price = 0.0;
        size = 0;
    }
    void AddNewProductToCart(Product* product){
        product_list[size] = product;
        product->checkStock(product->getStock() - 1);
        size++;
    }
    void RemoveProductToCart(int index){
        if ((index < 0) || (index > size)) {
            std::cout << "wrong index" << std::endl;
        }
        else {
            for (int i = index; i < size; i++)
                product_list[i] = product_list[i+1];
            size--;
        }
    }
    void ClearCart(){
        for (int i = 0; i < size; i++) {
            product_list[i]->~Product();
        }
        size = 0;
    }
    void display(){
        if (!isEmpty()){
            total_price = calculator_price(product_list, size);
            for (int i = 0; i < size; i++) {
                std::cout << i+1 << ". Product: " << product_list[i]->getProductName() << std::endl;
            }
            std::cout << "Total Price: " << total_price << std::endl;
        }
        else
            std::cout << "Cart is Empty" << std::endl;
    }
    bool isEmpty()const{
        if (size == 0)
            return true;
        return false;
    }
};

#endif
