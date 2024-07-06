#include <iostream>

class MyClass
{
public:
    void print()const;
private:
    mutable int debugVariable;  //without mutable, const function print() can not change debugVariable...
};

void MyClass::print()const
{
    ++debugVariable;
}