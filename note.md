# 第七周

## 输入错误

### C 方式

```C
#include <stdio.h>

ret = scanf();
```

### C++ 方式

```C++
#include <iostream>
#include <climits>

int x;
cin >> x;

if (!cin.good())
{
    cin.clear(); // 清除状态
    cin.ignore(INT_MAX, '\n');
}
```

- 对于多种输入，没有标准方法
- 一次读一个，cin如果false则清空缓冲区，否则不清空。
- 实际情况：多选择，少输入，从用户角度避免输入错误，而不是输入错误后纠正。

## 输出

- cout和printf之间的速度差距：printf快得多。
- 屏幕输出比cpu输出慢得多。
- 字体大，速度慢。
- 字体不同，输出速度不同。
