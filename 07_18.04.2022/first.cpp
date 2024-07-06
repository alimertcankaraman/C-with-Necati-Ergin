#include <iostream>
#include "foo.h"

int x1 = 10;

int main()
{
    int x1 = ::x1;

    std::cout << "x1: " << x1 << "\n\n";

    printAddr();

    std::cout << "\n\n&x " << &x << "\n\r";
    std::cout << "&y " << &y << "\n\r";
    std::cout << "&z " << &z << "\n\r";

    return 0;
}