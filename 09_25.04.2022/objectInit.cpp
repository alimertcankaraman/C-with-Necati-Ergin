#include <iostream>

class MyClass
{
public:
    MyClass(int a = 1)
    {
        std::cout << " param: " << a << "\n";
    }
};



int main()
{
    MyClass x1 = 10.1;  //double verilirse warning only!
    MyClass x2(0);
    MyClass x3{30};     //double verilirse error!
    MyClass xn[10]{ 25 };
    return 0;
}