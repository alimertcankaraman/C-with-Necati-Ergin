#include <iostream>

//Öyle bir foo fonksiyonu olsun ki legal olarak sadece int argümanı kabul etsin.
void func(int);
void func(double) = delete;
void func(long) = delete;
// Tüm type'lar için özellikle user defined lar için delete yapmak imkansız. Template kullanılmalı!

template <typename T>
void func(T) = delete;

// C++23 : really keyword!

// void func(really int); // sadece int kabul eder. Template'e gerek yok.

int main()
{

    func(1.2);
    func(1.2f);
    func(10L);
    func(3);

    return 0;
}