# Online Marketplace

This project implements a Product Management System that allows for managing electronic products, food products, and books. It includes features such as adding products, sorting them, managing shopping carts, applying discounts, and generating orders.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Dependencies](#dependencies)
- [Code Structure](#code-structure)
- [Original Draft](#original-draft)
- [License](#license)

## Introduction

This Product Management System is designed to handle different types of products such as electronics, food items, and books. It provides functionality for adding products to specific categories, managing them within a product list, sorting products based on various criteria, managing shopping carts, applying discounts, and generating orders with detailed pricing.

## Usage

The main.cpp file contains the main program code that demonstrates the functionality of the Product Management System. It creates instances of electronic products, food products, and books, adds them to corresponding product lists, performs operations like sorting, managing shopping carts, applying discounts, and generating orders.

To compile and run the program:
1. Compile the code using a C++ compiler (e.g., g++)
2. Run the compiled executable

## Dependencies

This project depends on C++ standard libraries for input/output and STL containers. Ensure you have a C++ compiler installed on your system.

## Code Structure

- `main.cpp`: Contains the main program code with the demonstration of Product Management System functionalities.
- `ElectronicsProduct.h` and `ElectronicsProduct.cpp`: Define and implement the ElectronicsProduct class.
- `FoodProducts.h` and `FoodProducts.cpp`: Define and implement the FoodProducts class.
- `BooksProducts.h` and `BooksProducts.cpp`: Define and implement the BooksProducts class.
- `ProductManager.h` and `ProductManager.cpp`: Define and implement the ProductManager class for managing product lists.
- `Shoppingcart.h` and `Shoppingcart.cpp`: Define and implement the Shoppingcart class for managing shopping carts.
- `Order.h` and `Order.cpp`: Define and implement the Order class for generating orders.
- `Discounts.h` and `Discounts.cpp`: Define and implement the Discounts class for applying discounts.

## Original Draft

The original draft of the code is provided in a single .cpp file containing all the ideas and initial implementation. It has been modularized and structured into separate header and source files for better organization and readability.

