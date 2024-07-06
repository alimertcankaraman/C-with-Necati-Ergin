#include <iostream>

void func(int &r)
{
    r = 999; // call by reference in c++; as giving pointer in c
}

void foo1(int *p);
void foo1(const int *p); // salt okuma için kullanılabilir.

int main()
{
    int x{10};
    int y = 25;
    int &r = x; // r x'e bir referans; r = x
    const int &z = r;

    int &&rr = 10; // R value reference!
    std::cout << "R value reference -> &&r: " << rr << "\n";

    // std::cout << "z: " << z++ << "\n";   //error since const, cant be changed.
    std::cout << "&r;: " << &r << "  r: " << r << "\n";
    // r++ önce bas sonra artır en sağdaki ilk, ++r önce artır sonra bas!
    std::cout << "&++r; " << &++ ++ ++ ++r << "  r++: " << (++r) << "  ++r: " << (r++) << "\n";
    std::cout << "r1: " << r << "\n";
    r++;
    std::cout << "r2: " << r << "\n";

    r = y; // x = y

    std::cout << "r3: " << r << "\n\n";
    std::cout << "pointer/referneces to arrays..\n";
    // pointers to array:
    // C:
    int a[] = {1, 5, 3};
    int(*p)[3] = &a; //*p = a oldu!
    // C++:
    int(&r2)[3] = a; // r = a
    auto r3 = a;     // same!!

    /*for (int i = 0; i < 3; i++)
    {
        std::cout << a[i] << " - " << r2[i] << " - " << r3[i] << "\n";
    }*/

    // Call by reference!

    int f = 2;
    func(f);
    std::cout << "\nf: " << f;

    // const correctness
    const int e = 10;
    int *pe = (int *)&e;
    *pe = 3; // tanımsız, endefined behaviour
    std::cout << "\ne: " << e;

    return 0;
}