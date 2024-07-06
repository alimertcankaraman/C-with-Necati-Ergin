#include <iostream>
#include "foo.h"

void printAddr(void)
{
    std::cout << "&x " << &x << "\n\r";
    std::cout << "&y " << &y << "\n\r";
    std::cout << "&z " << &z << "\n\r";
}