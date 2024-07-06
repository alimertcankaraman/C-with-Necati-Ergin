#include "iostream"
#include "stdlib.h"

int main()
{
    int x = 10;
    // int *px = x; // illegal
    // char *cp = &x; //otomatik dönüşüm yok, use casting
    // int *p = x; //ERROR
    void *vp = &x;
    void *mallocptr = malloc(1000U);
    // int *yp = vp; void ptr'den int' yok ama tam tersi geçerli
    // char *p = "kaya"; // hata normalde
    // const int con; // initialize here

    const int c = 10;
    int arr[c] = {0}; // legal in cpp not c
    // char str[4] = "mert"; //5 karakter olmalı

    bool flag = false;
    // ++flag; //flag true oldu! Hata in c++ 17 and more
    flag = vp; // legal, vp = flag; // illegal
    printf("sad cpp");

    return 0;
}