#include <iostream>

using std::cout;
using std::endl;

void swap(int &, int &);

int main()
{
    int i, j;
    std::cin >> i >> j;
    cout << i << " " << j << endl;
    swap(i, j);
    cout << i << " " << j << endl;
    return 0;
}

void swap(int &i, int &j)
{
    int tmp = i;
    i = j;
    j = tmp;
    return;
}
