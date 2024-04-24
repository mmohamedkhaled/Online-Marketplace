#include "Discounts.h"

Discounts::Discounts() {}

Discounts::Discounts(double Precentage, double Fixed, double Bogo, std::string Cupon) {
    precentage = Precentage;
    fixed = Fixed;
    bogo = Bogo;
    cupon = Cupon;
}

void Discounts::setFixed(double Fixed) {
    fixed = Fixed;
}

void Discounts::setName(std::string Name) {
    name = Name;
}

std::string Discounts::getName() const {
    return name;
}

double Discounts::getNotFixed(const Discounts& discount1, const Discounts& discount2) const {
    return ((discount1.fixed / discount2.fixed) / 100.0) * 100.0;
}

double Discounts::getNotPercentage() const {
    return precentage / 100.0;
}

double Discounts::getNotComposite() const {
    return 1 / 2.0;
}

std::string Discounts::getCupon() const {
    return cupon;
}

double Discounts::convertCupon(std::string Cupon) const {
    if (Cupon == "No") {
        return 0;
    } else {
        int size = Cupon.length();
        char arr[1];
        int y = 0;
        int T = 0;

        for (int i = 0; i < size; i++) {
            if (i > 7) {
                arr[T] = Cupon[i];
                T++;
            }
        }
        std::string cupon1;
        cupon1 = arr;
        return (stoi(cupon1)) / 100.0;
    }
}

double Discounts::getValue(const Discounts& discount, const Discounts& discount2) const {
    double x = discount.getNotPercentage();
    if (x < discount.getNotComposite()) {
        x = discount.getNotComposite();
    }
    return x;
}

double Discounts::operator-(const Discounts& price) const {
    double off = 0.0;
    double sub = 0.0;

    if (precentage != 0) {
        sub = fixed - fixed * (precentage / 100.0);
        return sub;
    } else if (fixed != 0) {
        return fixed - price.fixed;
    } else if (bogo != 0) {
        sub = fixed / 2.0;
        return sub;
    } else if (!cupon.empty()) {
        off = convertCupon(cupon);
        sub = fixed - fixed * off;
        return sub;
    }
    return 1; // Placeholder
}
