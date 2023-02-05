#include "template_test.h"
#include <iostream>

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

#if 0
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
#endif

#if 0
template <typename T>
class Vector
{
public:
    Vector(size_t capacity = 10)
        : _pData(new T[capacity]), _size(0), _capacity(capacity)
    {
    }
    ~Vector();
    void PushBack(const T &data)
    {
        if (_size == _capacity)
        {
            T *p = new T[_capacity * 2];
            for (int i = 0; i < _size; ++i)
            {
                p[i] = _pData[i];
            }
            _pData[_size] = data;
            ++_size;
        }
    }

private:
    T *_pData;
    size_t _size;
    size_t _capacity;
};

// 类模板成员函数在类外定义，必须加上类模板的参数列表
template <typename T>
Vector<T>::~Vector() // 必须指定类域，~Vector是属于Vector<T>类模板的成员函数
{
    if (_pData)
        delete[] _pData;
    _size = 0;
    _capacity = 0;
}

int main()
{
    // 模板实例化
    Vector<int> v1(1);
    v1.PushBack(1);
    v1.PushBack(2);
    v1.PushBack(3);
    v1.PushBack(4);

    return 0;
}
#endif
////////////////////////////////////////////
#if 0
#include <string>
template <class T1, typename T2>
class Pair
{
public:
    T1 key;
    T2 value;
    Pair(T1 k, T2 v) : key(k), value(v){};
    bool operator<(const Pair<T1, T2> &p) const;
};
template <class T1, typename T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2> &p) const
{
    return key < p.key;
}

int main()
{
    Pair<std::string, int> student("Tom", 19);
    std::cout << student.key << " " << student.value;
    return 0;
}
#endif

#if 1
template <class T>
class A
{
public:
    template <class T2>
    void Func(T2 t)
    {
        std::cout << t << std::endl;
    }
};

int main()
{
    A<int> a;
    a.Func("k");
    a.Func("hello");
}
#endif