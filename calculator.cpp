#include <iostream>

int main() {

    char op;
    double number1;
    double number2;

    std::cout << "Please enter one of the following operators: (+ - * /):";
    std::cin >> op;

    std::cout << "Please enter a number: ";
    std::cin >> number1;

    std::cout << "Please enter a second number:  ";
    std::cin >> number2;

    switch(op) {
    case '+':
        std::cout << number1 + number2;
        break;
    case '-':
        std::cout << number1 - number2;
        break;
    case '*':
        std::cout << number1 * number2;
        break;
    case '/':
        std::cout << number1 / number2;
        break;
    default:
        std::cout << "This is not a right operator";
    }

    return 0;
}