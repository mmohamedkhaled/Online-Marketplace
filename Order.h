#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <cstdlib>
#include "Shoppingcart.h"
#include "Discounts.h"
#include "ElectronicsProduct.h"
#include "FoodProducts.h"
#include "BooksProducts.h"

class Order {
private:
    int id;
    Shoppingcart<ElectronicsProduct> electronicCart;
    Shoppingcart<FoodProducts> foodCart;
    Shoppingcart<BooksProducts> bookCart;
    Discounts customer[4];

public:
    Order();
    Order(Shoppingcart<ElectronicsProduct> Cart1, Shoppingcart<FoodProducts> Cart2, Shoppingcart<BooksProducts> Cart3, Discounts customer1[]);
    int getId();
    void setId();
    void setelectronicshopingcart(Shoppingcart<ElectronicsProduct>& cart1);
    void setcustomer(Discounts cupon, int index);
    Discounts getcustomer(int index);
    void display();
    double totalpricebefore();
    double getmax();
    double totalpriceafterproducts(double value, int differ);
};

#include "Order.cpp"  

#endif  // ORDER_H
