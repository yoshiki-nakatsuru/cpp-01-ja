#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    //numbersは定義された段階で要素が格納されていないので、size&capacity共に0になる。
    std::cout << "Initial size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    //numbersに1が格納されたことにより、size&capacity共に1になる。
    numbers.push_back(1);
    std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    //numbersに2が格納されたことにより、size&capacity共に2になる。
    numbers.push_back(2);
    std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    //numbersに3が格納されたことにより、sizeが3になる。capacityはメモリ再割り当ての頻度を減らすため、3より大きい4に拡張される。
    numbers.push_back(3);
    std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    /*
    メモリ再割り当ての頻度を減らすための挙動は下記の通りで、
    vectorの要素を拡張していくと、2のn乗を超える要素が追加されたタイミングでvectorのcapacityが2n+1乗に拡張さる挙動をする。
    5の時にcapacityが8となり、9の時にcapacityが16となる。
    numbers.push_back(4);
    std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    numbers.push_back(5);
    std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    numbers.push_back(6);
    std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    numbers.push_back(7);
    std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    numbers.push_back(8);
    std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    numbers.push_back(9);
    std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    */
    //reserveで指示されたcapacityサイズが10で、現状のcapacityが4のため、capacityが10に拡張される。sizeは要素に変更がないため、3のまま変化なし。
    //もしcapacityが10以上の時にnumbers.reserve(10)を行ってもcapacityは変化しない。
    numbers.reserve(10);
    std::cout << "After reserving space: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
}