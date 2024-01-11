#include <iostream>
#include <string>
#include "math_operations.h"

int main() {
    std::string arg1;
    std::string arithmeticSymbol;
    std::string arg2;

    std::cout << "Enter a calculation: " ;
    std::cin >> arg1 >> arithmeticSymbol >> arg2;

    double number1;
    double number2;

    try {
        number1 = std::stod(arg1);
    } catch (const std::invalid_argument& e) {
        std::cout << "引数1に数値を入力してください" << std::endl;
        return 0;
    }

    try {
        number2 = std::stod(arg2);
    } catch (const std::invalid_argument& e) {
        std::cout << "引数2に数値を入力してください" << std::endl;
        return 0;
    }
    

    if(arithmeticSymbol.empty()){
        std::cout << "ERR:正しい算術記号が入力されていません" << std::endl;
        return 0;
    }

    double result;
    
    switch(arithmeticSymbol.front()){
        case '+':
            result = MathOps::addition(number1, number2); 
            break;
        case '-':
            result = MathOps::subtraction(number1, number2);
            break;
        case '*':
            result = MathOps::multiplication(number1, number2);
            break;
        case '/':
            result = MathOps::division(number1, number2);
            break;
        default:
            std::cout << "ERR:正しい算術記号を入力してください" << std::endl;
            return 0;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}