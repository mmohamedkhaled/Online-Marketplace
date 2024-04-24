#ifndef FOODPRODUCTS_H
#define FOODPRODUCTS_H

#include <iostream>
#include <string>

class FoodProducts {
private:
    std::string name;
    double price;
    std::string expireDate;
    double quantity;
    std::string type;
    bool foodDiscount;

public:
    FoodProducts();
    FoodProducts(std::string Name, double Price, std::string ExpireDate, double Quantity, std::string Type, bool FoodDiscount);

    // Getter and setter methods
    void setName(std::string Name);
    void setPricePerKilo(double PricePerKilo);
    void setExpireDate(std::string ExpireDate);
    void setQuantity(double Quantity);
    void setType(std::string Type);
    void setFoodDiscount(bool FoodDiscount);

    std::string getName() const;
    double getPrice() const;
    std::string getExpireDate() const;
    double getQuantity() const;
    std::string getType() const;
    bool getFoodDiscount() const;

    // Operator overloading
    bool operator!=(const FoodProducts& temp) const;
    bool operator==(const FoodProducts& temp) const;
    bool operator<(const FoodProducts& product1) const;
};

#endif // FOODPRODUCTS_H
