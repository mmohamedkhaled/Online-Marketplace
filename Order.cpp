#include "Order.h"

Order::Order() {
    id = rand();
}

Order::Order(Shoppingcart<ElectronicsProduct> Cart1, Shoppingcart<FoodProducts> Cart2, Shoppingcart<BooksProducts> Cart3, Discounts customer1[]) {
    electronicCart = Cart1;
    foodCart = Cart2;
    bookCart = Cart3;
    for (int i = 0; i < 4; i++) {
        customer[i] = customer1[i];
    }
}

int Order::getId() {
    return id;
}

void Order::setId() {
    id = rand();
}

void Order::setelectronicshopingcart(Shoppingcart<ElectronicsProduct>& cart1) {
    electronicCart = cart1;
}

void Order::setcustomer(Discounts cupon, int index) {
    customer[index] = cupon;
}

Discounts Order::getcustomer(int index) {
    return customer[index];
}

void Order::display() {
    std::cout << "Order ID: " << getId() << std::endl;
    std::cout << "Electronics Cart:" << std::endl;
    electronicCart.display();
    std::cout << "Food Cart:" << std::endl;
    foodCart.display();
    std::cout << "Books Cart:" << std::endl;
    bookCart.display();
}

double Order::totalpricebefore() {
    double totalpricebefore = 0.0;
    for (int i = 0; i < electronicCart.getsize(); i++) {
        ElectronicsProduct electricproduct;
        electricproduct = electronicCart.get(i);
        totalpricebefore += electricproduct.getprice();
    }
    for (int i = 0; i < foodCart.getsize(); i++) {
        FoodProducts foodproduct;
        foodproduct = foodCart.get(i);
        totalpricebefore += foodproduct.getprice();
    }
    for (int i = 0; i < bookCart.getsize(); i++) {
        BooksProducts bookproduct;
        bookproduct = bookCart.get(i);
        totalpricebefore += bookproduct.getprice();
    }
    std::cout << "Total price before discounts: " << totalpricebefore << std::endl;
    return totalpricebefore;
}

double Order::getmax() {
    std::vector<double> max;
    bool exist = false;

    for (int i = 0; i < electronicCart.getsize(); i++) {
        if (!exist && electronicCart.get(i).getelectronicdiscount() != 0) {
            max.push_back(electronicCart.get(i).getprice());
            exist = true;
        }
    }
    for (int i = 0; i < foodCart.getsize(); i++) {
        if (!exist && foodCart.get(i).getfooddiscount() != 0) {
            max.push_back(foodCart.get(i).getprice());
            exist = true;
        }
    }
    for (int i = 0; i < bookCart.getsize(); i++) {
        if (!exist && bookCart.get(i).getbookdiscount() != 0) {
            max.push_back(bookCart.get(i).getprice());
            exist = true;
        }
    }

    if (max.empty()) return 0.0;
    sort(max.begin(), max.end());
    return max[0];
}

double Order::totalpriceafterproducts(double value, int differ) {
    double totaldiscounts = 0.0;
    double totalpriceb = totalpricebefore();
    double totalpriceafter = 0.0;

    Discounts discout9;
    bool end = false;
    std::vector<double> maxdiscount;
    maxdiscount.push_back(customer[0].getnotprecentage());
    maxdiscount.push_back(customer[2].getnotcompo());
    maxdiscount.push_back(value);
    sort(maxdiscount.begin(), maxdiscount.end());

    for (int i = 0; i < 4; i++) {
        if (!end) {
            if (differ == 1) {
                discout9.setfixed(totalpriceb);
                totalpriceafter = discout9 - customer[3];
                end = true;
            } else {
                if (maxdiscount[i] == customer[0].getnotprecentage()) {
                    discout9.setfixed(getmax());
                    double x = discout9 - customer[0];
                    if ((totaldiscounts + x) < totalpriceb) {
                        totaldiscounts += x;
                    }
                } else if (maxdiscount[i] == customer[2].getnotcompo()) {
                    discout9.setfixed(getmax());
                    double x = discout9 - customer[2];
                    if ((totaldiscounts + x) < totalpriceb) {
                        totaldiscounts += x;
                    }
                } else if (maxdiscount[i] == value) {
                    discout9.setfixed(getmax());
                    double x = discout9 - customer[3];
                    if ((totaldiscounts + x) < totalpriceb) {
                        totaldiscounts += x;
                    }
                } else {
                    discout9.setfixed(getmax());
                    double x = discout9 - customer[1];
                    if ((totaldiscounts + x) < totalpriceb) {
                        totaldiscounts += x;
                    }
                }
            }
        }
    }

    totalpriceafter = totalpriceb - totaldiscounts;
    std::cout << "Total price after discounts: " << totalpriceafter << std::endl;
    return totaldiscounts;
}
