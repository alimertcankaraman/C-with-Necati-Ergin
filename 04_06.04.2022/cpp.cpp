#include <iostream>

int foo()
{
    return 1;
}

void f1(int &);       // only L value
void f2(const int &); // both L and R value
void f3(int &&);      // only R value

// data type(int &&x : R value) vs value category (x: L value)
void valCategory(int &&x)
{
    // x L value kategorisinde!!
    // int&& r = x;    // hata!
    int &r = x;
}

int *autoFunc(int *, int *);

int main()
{
    // if with initializer..    c++17 stdden sonra...
    /*if (int i = foo(); i < 5)
    {
        i = 4;
        std::cout << "i = " << i;
    }*/

    int c1 = 'a';
    char c2 = 'a';
    auto sum = c1 + c2;
    auto x = +c2; //+ x'i inte dönüştürüyor, olmasaydı char idi.

    std::cout << "c1 = " << ++c1 << " *** "
              << "c2 = " << ++c2 << " *** "
              << "sum = " << sum << " *** "
              << "x = " << x;

    const int a = 10;
    auto y = a; // auto kullanıldığında, const düşer!    y'nin türü int.

    int b = 10;
    const int &br = b;
    auto brr = br; // auto'da referanslık da düşer, brr int idir.

    int d[3] = {1, 2, 3};
    auto d2 = d; // array decay var, d2 int* türü

    const int e[3] = {1, 2, 3};
    auto e2 = e; // const'luk düşmez!!! hata olurdu zaten öyle bi durumda.

    auto p = "mert"; // p, auto: const char*

    auto fnc = autoFunc; // check fnc type!

    // CATEGORY 2 for auto.
    const int z{10};
    auto &z1 = z; // reference semantic ise const düşmez.

    auto &d3 = d; // auto ==> int[3] ; bozulma yok
                  // int (&d3)[3] = d; //aynısı

    auto &zz = "mert"; // auto: const char[5]
                       // const char(&zz)[5] = "mert" // aynısı

    int z2 = 10;
    int *pz = &x;

    auto &pr = pz;
    auto &pr2 = *pz;

    // CATEGORY 2 for auto LATER!
    auto &&xx = z2; // forwarding/universal reference.   //sağ taraf referansı denmiyor!

    return 0;
}