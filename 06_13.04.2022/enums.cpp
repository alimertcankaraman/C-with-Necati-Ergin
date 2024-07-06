#include <iostream>

enum Color
{
    red,
    blue,
    green
};

enum Colors : unsigned char
{
    redd,
    bluee,
    greenn
}; // underline türü unsigned char

// forward decleration yapılabilir:
enum Colorss : unsigned char;

enum class Clr
{
    red,
    blue,
    brown
}; // scope'lar ayrı..!!!

enum class TrfClr
{
    red,
    yellow,
    green
}; // scope'lar ayrı..!!!

void func()
{
    // using enum Clr; //C++20de geldi!!
    auto c1 = Clr::red;
    auto c2 = red; // same with using..
}

int far();

int main()
{
    // Aritmetic türlerden enum türlere implicit dönüşüm yok.
    Color mycolor{blue};
    // mycolor = 1;  //Hata!
    mycolor = static_cast<Color>(2);

    int ival;
    ival = mycolor; // Legal hala! Tehlikeli. enum class kullanılacak!

    auto c = TrfClr::red;

    Clr clr = static_cast<Clr>(TrfClr::green);

    std::cout << "Clr: " << (int)clr;

    int far = 0;

    ::far(); // far'ı önce global namespace'te ara!

    return 0;
}