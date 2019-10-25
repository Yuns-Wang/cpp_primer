#include <iostream>

int cnt();

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << cnt() << std::endl;
    }
    return 0;
}

int cnt()
{
    static int n = 0;
    return ++n;
}
