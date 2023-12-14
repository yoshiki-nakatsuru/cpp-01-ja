#include <iostream>

long long power (int base, int exponent = 2){

    long long result {1};

    if( exponent >= 0 ){
        for(int i = 0; i < exponent; i++){
            result *= static_cast<int>(base);
        }
    }else{
        throw std::runtime_error("Invalid input exponent.");
    }

    return result;
}

int main(){

    std::cout << power(3,4) << std::endl;
    return 0;
}

