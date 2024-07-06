#include <iostream>

int x{};

int main()
{
    int x2{};

    // constexpr int *px2 = &x2; // static ömürlü değil x2: error (const değil)
    constexpr int *const p = &x; // p'nin türü int*; const int* değil!
    constexpr const int *p2 = &x;

    *p = 3;
    // *p2 = 4; //Hata: *p2 read only

    char c = 65;
    auto cx = 2 + c;

    std::cout << "cx = " << (char)cx;

    return 0;
}