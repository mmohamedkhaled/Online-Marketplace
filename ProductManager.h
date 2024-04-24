#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H

#include <vector>
#include <algorithm>
#include "ElectronicsProduct.h" 

template <class T>
class ProductManager {
private:
    std::vector<T> data;

public:
    ProductManager();
    ProductManager(std::vector<T> data);

    void operator+(T &data1);
    bool validate(T &obj);
    void update(T &obj, int determiner, int accept);
    int search(T &data1);
    void operator-(T &data1);
    friend std::ostream &operator<<(std::ostream &os, const ProductManager<T> &m);
    void sortby(std::string word);
    std::vector<T> add(T &add);
    double getMax();
    double getMin();
    double getAverage();
};

#endif // PRODUCTMANAGER_H
