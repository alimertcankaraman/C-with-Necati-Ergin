#include <iostream>

class MyClass
{
public:
    int foo(void);
    int foo2(void)const; //overload functions with const
private:
    int m;
};

struct Data
{
    int a, b, c;
};

void fooGlobal(MyClass* p)
{
    std::cout << "\n addr: " << p;
}

int MyClass::foo(void)
{
    std::cout << "foo() cagrildi!";
    fooGlobal(this);

    return 1;
}

int main()
{
    struct Data myData1;
    const struct Data myData2{};
    const struct Data* pData1 = &myData1;
     
    //struct Data* pData2 = &myData2; //Error
    //pData->a = 10; //Error

    std::cout << "class: " << sizeof(MyClass);
    std::cout << "\n";

    MyClass mc;

    mc.foo();
    std::cout << "\n mc addr: " << &mc;
    return 0;
}