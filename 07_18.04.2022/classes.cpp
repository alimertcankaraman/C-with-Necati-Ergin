#include <iostream>

class MyClass1
{
public:
    int x;
    int foo() {
        return 1;
    }
};

class MyClass2
{
    int x;
    int y;
    int z;
};

class MyClass3
{
public:
    int x = 0;
    int y = 4;
    static int z;
};

int main()
{
    MyClass1 c1;
    MyClass2 c2;
    MyClass3 c3;
    std::cout << "class1: " << sizeof(c1);
    std::cout << "\n";
    std::cout << "class2: " << sizeof(c2);
    std::cout << "\n";
    std::cout << "class3: " << sizeof(c3);
    std::cout << "\n\n";

    int a = c1.foo();
    
    return 0;
}