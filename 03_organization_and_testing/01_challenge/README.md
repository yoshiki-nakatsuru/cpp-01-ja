# チャレンジ1

次のコードがあります。

**temp_sensor.h**
```cpp
namespace Sensor {
    float readTemperature();
}
```

**temp_sensor.cpp**
```cpp
#include "temp_sensor.h"

float readTemperature() {
    return 25.5;
}
```

**main.cpp**
```cpp
#include <iostream>
#include "temp_sensor.h"

int main() {
    std::cout << "Temperature reading: " << readTemperature() << std::endl;
    return 0;
}
```

このプログラムをコンパイルして実行し、エラーの原因となっているコードを修正してください。その際、コードを削除するのではなく、コードを追加して修正してください。
