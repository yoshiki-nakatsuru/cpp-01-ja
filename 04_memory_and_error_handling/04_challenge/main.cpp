#include <iostream>
#include <stdexcept>
#include <vector>

// コードを入力してください
int element_at(const std::vector<int>& arg_vector, int index){

    if((index >= 0) && (index < arg_vector.size())){
        return arg_vector[index];
    }else{
        throw std::out_of_range("input index is out of range.");
    }
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    // コードを入力してください
    int result;
    //インデックスがvectorの範囲内のケース
    try{
        result = element_at(numbers, 3);
        std::cout << result << std::endl;
    }catch(const std::out_of_range& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
    //インデックスがvectorの範囲外のケース
    try{
        result = element_at(numbers, 10);
        std::cout << result << std::endl;
    }catch(const std::out_of_range& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}