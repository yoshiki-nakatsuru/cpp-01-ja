# チャレンジ2

再帰関数factorialの宣言と定義を完成させてください。この関数は整数型の引数 `n` をとり、`n` の階乗を返します。

```cpp
______ factorial(int n);

int main() {
  std::cout << "Factorial of 4 is " << factorial(4) << std::endl;
  return 0;
}

______ factorial(int n) {
  if (n == 0) {
    ______ 1;
  } else {
    ______ n * factorial(n - 1);
  }
}
```
