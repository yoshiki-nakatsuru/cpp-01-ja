#include <iostream>
#include <vector>

// コードを入力してください
std::vector<int> double_elements(const std::vector<int>& a){
    std::vector<int> temp = {};
    
    for (auto num : a){
        temp.push_back(num*2);
    }
    
    return temp;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // コードを入力してください
    std::vector<int> double_numbers(double_elements(numbers));
    //元のvectorを出力
    for (auto num : numbers){
        std::cout << num <<std::endl;
    }
    //2倍したvectorを出力
    for (int num : double_numbers){
        std::cout << num <<std::endl;
    }
    
    return 0;
}