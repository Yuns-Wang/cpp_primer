#include <iostream>
#include <initializer_list>

int sum(std::initializer_list<int> iil)
{
    int s = 0;
    for (const int i : iil)
        s += i;
    return s;
}

int main()
{
    std::cout << sum({1,2,3,4,5,6,7}) << std::endl;
    return 0;
}
