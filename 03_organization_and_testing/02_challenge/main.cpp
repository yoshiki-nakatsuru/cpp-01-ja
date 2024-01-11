#include <thread>
#include <iostream>

/*
    >C++11以降では4番目のタイプの記憶域期間が追加されています
    C++11以降に追加された4番目の記録域期間はthread_localでスレッド単位の記録域期間を持ちます。
    
    >この記憶域期間を持つ `int` 型の変数 `thread_data` を宣言し、値10で初期化するには、どのようにしますか。
    "thread_local"の付けて宣言し、10で初期化します。
*/
thread_local int thread_data = 10;

void threadFunction(){
  std::cout << thread_data << std::endl;
  thread_data++;
}

void threadFunc(){
    threadFunction();
    threadFunction();
    threadFunction();
}

int main(){
    std::thread t1(threadFunc);
    std::thread t2(threadFunc);

    t1.join(); 
    t2.join();

    return 0;
}