#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b)
{

    return(a + b);
}

int main()
{
    int x = 1, y = 2;
    printf("%d\n", sum(x , y));
}

// a, b 未定义标识符
// sum函数调用的参数太少
// 形参'a','b'的重定义
// sum:找不到标识符，应在main函数之前定义
// x,y未初始化
