#include "FoodProducts.h"

FoodProducts::FoodProducts() {}

FoodProducts::FoodProducts(std::string Name, double Price, std::string ExpireDate, double Quantity, std::string Type, bool FoodDiscount) {
    name = Name;
    price = Price;
    expireDate = ExpireDate;
    quantity = Quantity;
    type = Type;
    foodDiscount = FoodDiscount;
}

void FoodProducts::setName(std::string Name) {
    name = Name;
}

void FoodProducts::setPricePerKilo(double PricePerKilo) {
    price = PricePerKilo;
}

void FoodProducts::setExpireDate(std::string ExpireDate) {
    expireDate = ExpireDate;
}

void FoodProducts::setQuantity(double Quantity) {
    quantity = Quantity;
}

void FoodProducts::setType(std::string Type) {
    type = Type;
}

void FoodProducts::setFoodDiscount(bool FoodDiscount) {
    foodDiscount = FoodDiscount;
}

std::string FoodProducts::getName() const {
    return name;
}

double FoodProducts::getPrice() const {
    return price;
}

std::string FoodProducts::getExpireDate() const {
    return expireDate;
}

double FoodProducts::getQuantity() const {
    return quantity;
}

std::string FoodProducts::getType() const {
    return type;
}

bool FoodProducts::getFoodDiscount() const {
    return foodDiscount;
}

bool FoodProducts::operator!=(const FoodProducts& temp) const {
    return (name != temp.name) || (price != temp.price) || (quantity != temp.quantity);
}

bool FoodProducts::operator==(const FoodProducts& temp) const {
    return (name == temp.name) && (price == temp.price) && (quantity == temp.quantity);
}

bool FoodProducts::operator<(const FoodProducts& product1) const {
    if (name != product1.name) {
        return name < product1.name;
    } else if (price != product1.price) {
        return price > product1.price;
    } else {
        return quantity > product1.quantity;
    }
}
