#include "template_test.h"
#include<iostream>

#if 0
//函数模板原理
template<typename T>

void sweep(T& pa, T& pb)
{
    T temp = pa;
    pa = pb;
    pb = temp;
}

int main()
{
    double a1 = 1.11, a2 = 2.22;
    sweep(a1,a2);
    std::cout << "a1 = " << a1;
    return 0;
}
#endif

//函数模板的实例化
//1.隐式实例化：让编译器根据实参（调用的参数）推演模板参数的实际类型
template<typename T>

T ADD(const T& left, const T& right)
{
    return left + right;
} 

int main()
{
    int a1 = 10,a2 = 20;
    double b1 = 1.11,b2 = 2.22;
    // 隐式实例化
    std::cout << ADD(a1,a2) << std::endl;
    std::cout <<ADD(b1,b2) << std::endl;

    //显示调用
     std::cout <<ADD<int>(b1,b2) << std::endl;

    return 0;
}