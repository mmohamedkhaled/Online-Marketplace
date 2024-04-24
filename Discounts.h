#ifndef DISCOUNTS_H
#define DISCOUNTS_H

#include <iostream>
#include <string>

class Discounts {
private:
    std::string name;
    double precentage;
    double fixed;
    double bogo;
    std::string cupon;

public:
    Discounts();
    Discounts(double Precentage, double Fixed, double Bogo, std::string Cupon);

    void setFixed(double Fixed);
    void setName(std::string Name);
    std::string getName() const;
    double getNotFixed(const Discounts& discount1, const Discounts& discount2) const;
    double getNotPercentage() const;
    double getNotComposite() const;
    std::string getCupon() const;
    double convertCupon(std::string Cupon) const;
    double getValue(const Discounts& discount, const Discounts& discount2) const;
    double operator-(const Discounts& price) const;
};

#endif // DISCOUNTS_H
