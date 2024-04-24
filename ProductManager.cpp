#include "ProductManager.h"

template <class T>
ProductManager<T>::ProductManager() {}

template <class T>
ProductManager<T>::ProductManager(std::vector<T> data) {
    this->data = data;
}

template <class T>
void ProductManager<T>::operator+(T &data1) {
    data.push_back(data1);
}

template <class T>
bool ProductManager<T>::validate(T &obj) {
    bool exist = false;
    for (size_t i = 0; i < data.size(); i++) {
        if (obj == data[i] && obj.getquantity() != 0) {
            exist = true;
            break;
        }
    }
    return exist;
}

template <class T>
void ProductManager<T>::update(T &obj, int determiner, int accept) {
    if (accept == 1) {
        int index = search(obj);
        data.erase(data.begin() + index);
        if (determiner == 1) {
            obj.setquantity(obj.getquantity() + 1);
        } else {
            obj.setquantity(obj.getquantity() - 1);
        }
        data.push_back(obj);
    }
}

template <class T>
int ProductManager<T>::search(T &data1) {
    for (int i = 0; i < data.size(); i++) {
        if (data[i].getname() == data1.getname()) {
            return i;
        }
    }
    return -1; // Indicate not found
}

template <class T>
void ProductManager<T>::operator-(T &data1) {
    int index = 0;
    for (size_t i = 0; i < data.size(); i++) {
        if (data1 == data[i]) {
            index = i;
            break;
        }
    }
    data.erase(data.begin() + index);
}

template <class T>
std::ostream &operator<<(std::ostream &os, const ProductManager<T> &m) {
    for (size_t i = 0; i < m.data.size(); i++) {
        os << m.data[i];
        if (i < m.data.size() - 1) {
            os << ", ";
        }
    }
    return os;
}

template <class T>
void ProductManager<T>::sortby(std::string word) {
    if (word == "price") {
        std::sort(data.begin(), data.end(), comparePrice<T>);
    } else if (word == "name") {
        std::sort(data.begin(), data.end(), comapareName<T>);
    } else if (word == "quantity") {
        std::sort(data.begin(), data.end(), comapreQuantity<T>);
    }
}

template <class T>
std::vector<T> ProductManager<T>::add(T &add) {
    data.push_back(add);
    return data;
}

template <>
double ProductManager<ElectronicsProduct>::getMax() {
    double max = data.empty() ? 0.0 : data[0].getwarranty();
    for (size_t i = 1; i < data.size(); i++) {
        if (max < data[i].getwarranty()) {
            max = data[i].getwarranty();
        }
    }
    return max;
}

template <>
double ProductManager<ElectronicsProduct>::getMin() {
    double min = data.empty() ? 0.0 : data[0].getwarranty();
    for (size_t i = 1; i < data.size(); i++) {
        if (min > data[i].getwarranty()) {
            min = data[i].getwarranty();
        }
    }
    return min;
}

template <>
double ProductManager<ElectronicsProduct>::getAverage() {
    double sum = 0.0;
    for (size_t i = 0; i < data.size(); i++) {
        sum += data[i].getwarranty();
    }
    return data.empty() ? 0.0 : sum / data.size();
}
