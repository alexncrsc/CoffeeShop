# CoffeeShop
CoffeeShop is a C++ program that simulates a coffee shop. It provides the functionality to add and list coffee and tea products with their details (such as origin, score, type, name, price, and quantity), and can handle errors such as input validation exceptions.

#Installation
You can download the program's source code from the repository on GitHub. You will need to have a C++ compiler installed on your computer to build the program.

#Usage
To run the program, compile and execute the main.cpp file. The program will prompt you to input options to add and list coffee and tea products. The available options are:

1: add a coffee product
2: add a tea product
11: list all coffee products
21: list all tea products
When adding a coffee product, you will be asked to input the product's origin, score, quantity, and price. When adding a tea product, you will be asked to input the product's type, name, quantity, and price.

The program also includes custom exception classes to handle invalid input, such as a score over 99 or a price over 1000. If such an exception is thrown, the program will catch it and print an error message.

#Contributing
Contributions to this project are welcome. If you find a bug or want to suggest a new feature, feel free to open an issue or submit a pull request.


