#include "assert.h"
#include "stdio.h"

enum Color
{
    red,
    blue,
    yellow
};

int main()
{
    assert(sizeof(int) == sizeof(enum Color)); // always true

    // func(12, 13); //default func declerataion
    printf("c.");
    return 0;
}