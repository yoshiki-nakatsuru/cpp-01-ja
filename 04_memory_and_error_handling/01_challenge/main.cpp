#include <iostream>

int main() {
    int x = 42;

    // コードを入力してください
    //xのアドレス出力
    std::cout << &x << std::endl;

    int *p = &x;
    //ポインタ変数pが指すアドレスの値の出力
    std::cout << *p << std::endl;

    return 0;
}