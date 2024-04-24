#include "BooksProducts.h"

BooksProducts::BooksProducts() {}

BooksProducts::BooksProducts(std::string Title, double Price, std::string Author, std::string BookGenre, int Quantity, bool BookDiscount) {
    name = Title;
    price = Price;
    author = Author;
    bookGenre = BookGenre;
    quantity = Quantity;
    bookDiscount = BookDiscount;
}

void BooksProducts::setName(std::string Title) {
    name = Title;
}

void BooksProducts::setPrice(double Price) {
    price = Price;
}

void BooksProducts::setAuthor(std::string Author) {
    author = Author;
}

void BooksProducts::setBookGenre(std::string BookGenre) {
    bookGenre = BookGenre;
}

void BooksProducts::setQuantity(int Quantity) {
    quantity = Quantity;
}

void BooksProducts::setBookDiscount(bool BookDiscount) {
    bookDiscount = BookDiscount;
}

std::string BooksProducts::getName() const {
    return name;
}

double BooksProducts::getPrice() const {
    return price;
}

std::string BooksProducts::getAuthor() const {
    return author;
}

std::string BooksProducts::getBookGenre() const {
    return bookGenre;
}

int BooksProducts::getQuantity() const {
    return quantity;
}

bool BooksProducts::getBookDiscount() const {
    return bookDiscount;
}

bool BooksProducts::operator!=(const BooksProducts& temp) const {
    return (name != temp.name) || (price != temp.price) || (quantity != temp.quantity);
}

bool BooksProducts::operator==(const BooksProducts& temp) const {
    return (name == temp.name) && (price == temp.price) && (quantity == temp.quantity);
}

bool BooksProducts::operator<(const BooksProducts& product1) const {
    if (name != product1.name) {
        return name < product1.name;
    } else if (price != product1.price) {
        return price > product1.price;
    } else {
        return quantity > product1.quantity;
    }
}
