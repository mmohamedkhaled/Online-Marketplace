#include "ElectronicsProduct.h"

ElectronicsProduct::ElectronicsProduct() {}

ElectronicsProduct::ElectronicsProduct(std::string Name, double Price, int Quantity, double Warranty, std::string Factory, std::string Type, bool ElectronicDiscount) {
    name = Name;
    price = Price;
    quantity = Quantity;
    warranty = Warranty;
    factory = Factory;
    type = Type;
    electronicDiscount = ElectronicDiscount;
}

void ElectronicsProduct::setName(std::string Name) {
    name = Name;
}

void ElectronicsProduct::setPrice(double Price) {
    price = Price;
}

void ElectronicsProduct::setQuantity(int Quantity) {
    quantity = Quantity;
}

void ElectronicsProduct::setWarranty(double Warranty) {
    warranty = Warranty;
}

void ElectronicsProduct::setFactory(std::string Factory) {
    factory = Factory;
}

void ElectronicsProduct::setType(std::string Type) {
    type = Type;
}

void ElectronicsProduct::setElectronicDiscount(bool ElectronicDiscount) {
    electronicDiscount = ElectronicDiscount;
}

std::string ElectronicsProduct::getName() const {
    return name;
}

double ElectronicsProduct::getPrice() const {
    return price;
}

int ElectronicsProduct::getQuantity() const {
    return quantity;
}

double ElectronicsProduct::getWarranty() const {
    return warranty;
}

std::string ElectronicsProduct::getFactory() const {
    return factory;
}

std::string ElectronicsProduct::getType() const {
    return type;
}

bool ElectronicsProduct::getElectronicDiscount() const {
    return electronicDiscount;
}

bool ElectronicsProduct::operator!=(const ElectronicsProduct& temp) const {
    return (name != temp.name) || (price != temp.price) || (quantity != temp.quantity);
}

bool ElectronicsProduct::operator==(const ElectronicsProduct& temp) const {
    return (name == temp.name) && (price == temp.price) && (quantity == temp.quantity);
}

bool ElectronicsProduct::operator<(const ElectronicsProduct& product1) const {
    if (name != product1.name) {
        return name < product1.name;
    } else if (price != product1.price) {
        return price > product1.price;
    } else {
        return quantity > product1.quantity;
    }
}
