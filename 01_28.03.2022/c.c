#include "stdio.h"
#include "stdbool.h"
/*
foo()
{
}

int sum(x, y, z)
{
    return x + y + z;
}
*/
int main()
{
    int x = 10;
    // int *p = x; // legal
    char *ptr = "kaya";
    const int b; // legal in c not cpp
    const int c = 10;
    _Bool sda = false;
    sda++;
    // int arr[c] = {0}; //Error in c
    char str[4] = "mert"; // not legal in c++

    printf("sad c");

    return 0;
}