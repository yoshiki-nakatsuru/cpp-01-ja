#include <iostream>
#include <string>

int main(){
    std::string inputString { "0" };
    long long inputNumber {0};

    std::cout << "Please input number:" ;

    std::cin >> inputString;

    try{
        inputNumber = stoll(inputString);
    }catch(...){
        std::cout << "ERR:Invalid Input" << std::endl;
        return 1;
    }

    if(inputNumber == 0){
        std::cout << "Input number is zero." << std::endl;
    }else if ( inputNumber > 0){
        std::cout << "Input number is positive number." << std::endl;
    }else if ( inputNumber < 0){
        std::cout << "Input number is negative number." << std::endl;
    }

    return 0;
}