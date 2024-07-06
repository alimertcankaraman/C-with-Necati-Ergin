#include <iostream>

int main()
{
    int x = 10;
    // decltype(expression);
    decltype(x) a; // decltype = decleration type: "int" since x is int

    int y{}; // initializes with zero!

    decltype(y++) z = 4;

    std::cout << "y = " << y;
    return 0;
}