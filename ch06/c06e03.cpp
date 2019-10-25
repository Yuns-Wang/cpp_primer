#include <iostream>

int fact(int n);

int main()
{
    int i = 0;
    std::cin >> i;
    if (i < 1)
    {
        std::cerr << "Please input a positive number!";
        return 0;
    }
    std::cout << fact(i) << std::endl;
    return 0;
}

int fact(int n)
{
    int ans = 1;
    while (n > 1)
        ans *= n--;
    return ans;
}
