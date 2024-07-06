#include <iostream>

int x = 10;

void func(int = x++);

int main()
{
    func(); // == func(x++); // derleme sonuçları aynı
    func();
    func();
}

void func(int x)
{
    std::cout << "\n\rx = " << x;
}