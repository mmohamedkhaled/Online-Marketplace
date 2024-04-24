#include "Shoppingcart.h"

template <class S>
Shoppingcart<S>::Shoppingcart() {}

template <class S>
bool Shoppingcart<S>::add(S& obj, bool exist) {
    if (exist) {
        cart.push_back(obj);
        return true;
    } else {
        std::cout << "The product does not exist" << std::endl;
        return false;
    }
}

template <class S>
void Shoppingcart<S>::display() {
    if (cart.empty()) {
        std::cout << "There are no products in the cart" << std::endl;
    } else {
        for (size_t i = 0; i < cart.size(); i++) {
            std::cout << cart[i];
        }
    }
}

template <class S>
void Shoppingcart<S>::remove(S& obj) {
    cart.erase(std::remove(cart.begin(), cart.end(), obj), cart.end());
}

template <class S>
int Shoppingcart<S>::getsize() {
    return cart.size();
}

template <class S>
S Shoppingcart<S>::get(int index) {
    return cart[index];
}

template <class S>
S Shoppingcart<S>::getlastindex() {
    return cart.back();
}

template <class S>
void Shoppingcart<S>::cartsort() {
    sort(cart.begin(), cart.end());
}
