#include <iostream>

int compare(const int, const int * const);

int main()
{
    int i, j;
    std::cin >> i >> j;
    std::cout << compare(i, &j) << " is bigger." << std::endl;
    return 0;
}

int compare(const int i, const int * const j)
{
    return ((i > *j) ? i : *j);
}
