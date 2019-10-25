#include <iostream>

int abs(int i);

int main()
{
    int i;
    std::cin >> i;
    std::cout << abs(i) << std::endl;
    return 0;
}

int abs(int i)
{
    return i > 0 ? i : -i;
}
