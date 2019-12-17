#include <iostream>

using std::cout;

int main()
{
    auto fun = [](int i1, int i2) {return i1 + i2;};
    cout << fun(1, 2) << std::endl;
    return 0;
}
