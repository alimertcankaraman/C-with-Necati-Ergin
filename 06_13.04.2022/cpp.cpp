#include <iostream>

enum Color
{
    red,
    blue,
    green
};

void func(double);
void func(int);
void func(long) = delete;

int main()
{
    double d = 12.7;
    int i = 0;

    i = d;
    std::cout << "i = " << i;

    /*Type Cast*/
    int x = 10;
    void *vp = &x;

    /// void* dan T* dönüşüm static_cast ile yapılmalı.

    int *ip = static_cast<int *>(vp);

    // Enums..

    int ival = 2;
    Color c = static_cast<Color>(ival);

    // Delete
    func(1.2);  // double kazanır
    func(1.2f); // float to double promotion, double kazanır
                // float to in and long conversion.
    // func(10L); // Long kazanıcak ama func silindiği için hata.
    return 0;
}