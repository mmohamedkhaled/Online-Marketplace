#ifndef BOOKSPRODUCTS_H
#define BOOKSPRODUCTS_H

#include <iostream>
#include <string>

class BooksProducts {
private:
    std::string name;
    double price;
    std::string author;
    std::string bookGenre;
    int quantity;
    bool bookDiscount;

public:
    BooksProducts();
    BooksProducts(std::string Title, double Price, std::string Author, std::string BookGenre, int Quantity, bool BookDiscount);

    // Getter and setter methods
    void setName(std::string Title);
    void setPrice(double Price);
    void setAuthor(std::string Author);
    void setBookGenre(std::string BookGenre);
    void setQuantity(int Quantity);
    void setBookDiscount(bool BookDiscount);

    std::string getName() const;
    double getPrice() const;
    std::string getAuthor() const;
    std::string getBookGenre() const;
    int getQuantity() const;
    bool getBookDiscount() const;

    // Operator overloading
    bool operator!=(const BooksProducts& temp) const;
    bool operator==(const BooksProducts& temp) const;
    bool operator<(const BooksProducts& product1) const;
};

#endif // BOOKSPRODUCTS_H
