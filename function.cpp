// std::function
#include <functional>
#include <iostream>

std::function<int(int)> callback;
#if 0
// 1.std::function对象实例包装函数指针
int (*fun_ptr)(int);
int func1(int a)
{
    return a;
}
int main(int argc, char *argv[])
{
    std::cout << "Hello Workld !" << std::endl;
    fun_ptr = func1;    // 函数指针fun_ptr指向func1
    callback = fun_ptr; // std::function对象包装函数指针
    std::cout << callback(10) << std::endl;
}
#endif

#if 0
// 2.std::function对象实例函数
int func2(int a)
{
    return a;
}
int main(int argc, char *argv[])
{
    std::cout << "Hello Workld !" << std::endl;
    callback = func2; // std::function对象包装函数
    std::cout << callback(42) << std::endl;
}
#endif

#if 0
// 3.std::function对象包装模板函数
template <typename T>
T func2(T a)
{
    return a + 2;
}

int main(int argc, char *argv[])
{
    std::cout << "Hello Workld!" << std::endl;
    callback = func2<int>; // std::function对象包装模板函数
    std::cout << callback(3) << std::endl;
}
#endif

#if 0
// 4.std::function包装函数对象
struct add
{
    int operator()(int x)
    {
        return x + 9;
    }
};
int main(int argc, char *argv[])
{
    std::cout << "test_4" << std::endl;
    callback = add(); // std::function包装对象函数
    std::cout << callback(4) << std::endl;
}
#endif

#if 1
// 5.std::function包装lamda表达式

int main(int argc, char *argv[])
{
    std::cout << "test_4" << std::endl;
    auto func3 = [](int a)
    { return a * 2; };
    callback = func3; // std::function包装对象函数
    std::cout << callback(4) << std::endl;
}
#endif