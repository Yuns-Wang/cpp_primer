#include <iostream>

int sum(int);

int main()
{
    int i = 0;
    while(std::cin >> i)
    {
        std::cout << sum(i) << std::endl;
    }
    return 0;
}

int sum(int i)
{
    static int sum = 0;
    int j = i;
    sum += j;
    return sum;
}
