#ifndef ELECTRONICSPRODUCT_H
#define ELECTRONICSPRODUCT_H

#include <iostream>
#include <string>

class ElectronicsProduct {
private:
    std::string name;
    double price;
    int quantity;
    double warranty;
    std::string factory;
    std::string type;
    bool electronicDiscount;

public:
    ElectronicsProduct();
    ElectronicsProduct(std::string Name, double Price, int Quantity, double Warranty, std::string Factory, std::string Type, bool ElectronicDiscount);

    // Getter and setter methods
    void setName(std::string Name);
    void setPrice(double Price);
    void setQuantity(int Quantity);
    void setWarranty(double Warranty);
    void setFactory(std::string Factory);
    void setType(std::string Type);
    void setElectronicDiscount(bool ElectronicDiscount);

    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;
    double getWarranty() const;
    std::string getFactory() const;
    std::string getType() const;
    bool getElectronicDiscount() const;

    // Operator overloading
    bool operator!=(const ElectronicsProduct& temp) const;
    bool operator==(const ElectronicsProduct& temp) const;
    bool operator<(const ElectronicsProduct& product1) const;
};

#endif // ELECTRONICSPRODUCT_H
