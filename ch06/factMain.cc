#include <iostream>
#include "Chapter6.h"

int main()
{
    int i = 0;
    while (std::cin >> i)
    {
        std::cout << fact(i) << std::endl;
    }
    return 0;
}
