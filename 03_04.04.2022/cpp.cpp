#include <iostream>

void foo(int x, int y, int z);
void foo(int, int, int z = 10);
void foo(int x, int y = 20, int); // legal

int main()
{

    std::cout << "\n\rcpp";
    return 0;
}