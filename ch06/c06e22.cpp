#include <iostream>

void change(int*&, int*&);

int main()
{
    int i, j;
    std::cin >> i >> j;
    std::cout << i << " " << j << std::endl;
    int *ip = &i, *jp = &j;
    change(ip, jp);
    std::cout << i << " " << j << std::endl;
    std::cout << *ip << " " << *jp << std::endl;
    return 0;
}

void change(int *&i, int *&j)
{
    int *tmp = i;
    i = j;
    j = tmp;
}
