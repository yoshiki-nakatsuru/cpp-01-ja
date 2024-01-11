#include "math_operations.h"

namespace MathOps {

double addition(double a, double b){
    return a + b;
}

double subtraction(double a, double b){
    return a - b;
}

double multiplication(double a, double b){
    return a * b;
}

double division(double a, double b){
    if(b != 0.0 ){
        return a / b;
    }else{
        throw std::runtime_error("ゼロ除算です");
    }
}

}