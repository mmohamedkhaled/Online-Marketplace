#include <iostream>
#include <vector>
#include "Shoppingcart.h"
#include "Order.h"
#include "Discounts.h"

int main() {
    // Define meaningful product names
    ElectronicsProduct iphone("iPhone 13 Pro", 10000, 3, 3, "China Factory", "Smartphone", 1);
    ElectronicsProduct oppo("OPPO Find X5 Pro", 1500, 5, 5, "Egypt Factory", "Smartphone", 1);
    ElectronicsProduct samsung("Samsung Galaxy S22 Ultra", 3000, 9, 10, "Brazil Factory", "Smartphone", 1);
    FoodProducts burger1("Big Mac", 1000, "3/10/2024", 7, "Fast Food", 1);
    FoodProducts burger2("Chicken Sandwich", 100, "8/9/2023", 4, "Fast Food", 1);
    BooksProducts book1("Never Die", 1000, "author1", "Science Fiction", 10, 1);
    BooksProducts book2("Love Between Life and Death", 500, "author2", "Romance", 9, 1);

    // Create ProductManager instances
    ProductManager<ElectronicsProduct> electroniclist;
    ProductManager<FoodProducts> foodlist;
    ProductManager<BooksProducts> booklist;

    // Add products to ProductManager lists
    electroniclist + iphone;
    electroniclist + samsung;
    electroniclist + oppo;
    foodlist + burger1;
    foodlist + burger2;
    booklist + book1;
    booklist + book2;

    // Display ProductManager lists
    std::cout << "Electronic Product List:\n" << electroniclist;
    std::cout << "Food Product List:\n" << foodlist;
    std::cout << "Book Product List:\n" << booklist;

    // Remove products from lists
    electroniclist - iphone;
    foodlist - burger1;
    booklist - book1;

    // Display updated lists
    std::cout << "Electronic Product List after removal:\n" << electroniclist;
    std::cout << "Food Product List after removal:\n" << foodlist;
    std::cout << "Book Product List after removal:\n" << booklist;

    // Add back removed products
    electroniclist + iphone;
    foodlist + burger1;
    booklist + book1;

    // Sort ProductManager lists
    electroniclist.sortby("price");
    std::cout << "Electronic Product List sorted by price:\n" << electroniclist;
    electroniclist.sortby("name");
    std::cout << "Electronic Product List sorted by name:\n" << electroniclist;
    electroniclist.sortby("quantity");
    std::cout << "Electronic Product List sorted by quantity:\n" << electroniclist;

    foodlist.sortby("price");
    std::cout << "Food Product List sorted by price:\n" << foodlist;
    foodlist.sortby("name");
    std::cout << "Food Product List sorted by name:\n" << foodlist;
    foodlist.sortby("quantity");
    std::cout << "Food Product List sorted by quantity:\n" << foodlist;

    booklist.sortby("price");
    std::cout << "Book Product List sorted by price:\n" << booklist;
    booklist.sortby("name");
    std::cout << "Book Product List sorted by name:\n" << booklist;
    booklist.sortby("quantity");
    std::cout << "Book Product List sorted by quantity:\n" << booklist;

    // Get statistics from ProductManager lists
    std::cout << "Max warranty duration in Electronic Product List: " << electroniclist.getMax() << " years\n";
    std::cout << "Min warranty duration in Electronic Product List: " << electroniclist.getMin() << " years\n";
    std::cout << "Average warranty duration in Electronic Product List: " << electroniclist.getAverage() << " years\n";

    // Create and display shopping carts
    Shoppingcart<ElectronicsProduct> electroniccart1;
    Shoppingcart<FoodProducts> foodcart1;
    Shoppingcart<BooksProducts> bookcart1;

    electroniccart1.add(oppo, true);
    electroniccart1.add(iphone, true);
    foodcart1.add(burger1, true);
    bookcart1.add(book1, true);

    std::cout << "Contents of Electronic Cart 1:\n";
    electroniccart1.display();
    std::cout << "Contents of Food Cart 1:\n";
    foodcart1.display();
    std::cout << "Contents of Book Cart 1:\n";
    bookcart1.display();

    // Calculate order prices with discounts
    Discounts discount1(50.0, 0, 0, "Percentage Discount");
    Discounts discount(0, 0, 0, "Nilecart25 Coupon");
    Discounts customerdiscounts1[] = {discount1, discount1, discount1, discount};
    Order order1(electroniccart1, foodcart1, bookcart1, customerdiscounts1);
    std::cout << "Order 1 Details:\n";
    order1.display();
    double cost1 = order1.totalpriceafterproducts(discount.convertcupon(discount.getcupon()), 0);

    // Display total cost and discounts used
    double totalCost = cost1;
    std::vector<std::string> discountsUsed = {discount.getname(), discount1.getname()};
    std::cout << "Total cost with discounts: $" << totalCost << std::endl;
    std::cout << "Discounts used:\n";
    for (const auto &discountName : discountsUsed) {
        std::cout << discountName << std::endl;
    }

    return 0;
}
