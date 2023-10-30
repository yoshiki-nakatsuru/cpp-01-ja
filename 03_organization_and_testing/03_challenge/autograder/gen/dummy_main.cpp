#include "math_operations.h"
#include <iostream>

int dummy_main() {
    double a, b;
    char op;
    std::cout << "Enter a calculation: ";
    std::cin >> a >> op >> b;

    try {
        double result;
        switch (op) {
            case '+':
                result = MathOps::addition(a, b);
                break;
            case '-':
                result = MathOps::subtraction(a, b);
                break;
            case '*':
                result = MathOps::multiplication(a, b);
                break;
            case '/':
                result = MathOps::division(a, b);
                break;
            default:
                std::cout << "Invalid operator" << std::endl;
                return 1;
        }
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
