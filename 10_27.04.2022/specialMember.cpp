#include <iostream>

class MyClass
{
public:
    MyClass(int x) : MyClass(x, 0) {}
    MyClass() = default;
    //MyClass() = delete; //can not be called
    MyClass(int x, int y) : m{x}, n{y} {}   //!delegating ctor
    void printM()
    {
        std::cout << "m is " << m << "\n";
        std::cout << "n is " << n << "\n";
    }

private:
    int m, n;
};



int main()
{
    MyClass x1;
    MyClass x2(2);
    x1.printM();
    x2.printM();
    std::cout << "babababa";
}