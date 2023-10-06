# チャレンジ5

ユーザーが入力した3つの数値の平均を計算するプログラムがあります。さまざまな値を入力してこのプログラムをテストしてください。プログラムは適切に動作しますか。適切に動作しない場合は、想定どおりの出力になるようにプログラムを修正してください。

```cpp
#include <iostream>

int main() {
    int num1;
    int num2;
    int num3;
    float average;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / 3;

    std::cout << "Average is: " << average << std::endl;

    return 0;
}
```
