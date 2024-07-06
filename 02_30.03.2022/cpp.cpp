#include <iostream>
struct Data
{
};

int *foo() {}

int main()
{
    int x{3};
    std::cout << "x: " << x;

    double dval = 3.4;
    int ival1 = dval; // narrowing, hata yok
    int ival2(dval);  // hata yok
    int ival3{dval};  // HATA! brace init daha korumalı!

    int a[]{1, 2, 3, 4, 5};

    int *p1{foo()};
    p1 = nullptr;
    if (!p1) // if (p1 == nullptr)
    {
        std::cout << "\n\rp1 null pointer'dır.";
    }
    int in;

    std::cin >> in;
    return 0;
}