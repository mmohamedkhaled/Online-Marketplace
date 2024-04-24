#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "ElectronicsProduct.h"  
#include "FoodProducts.h"
#include "BooksProducts.h"

template <class S>
class Shoppingcart {
private:
    std::vector<S> cart;

public:
    Shoppingcart();
    bool add(S& obj, bool exist);
    void display();
    void remove(S& obj);
    int getsize();
    S get(int index);
    S getlastindex();
    void cartsort();
};

#endif  // SHOPPINGCART_H
