#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    for (auto &a : ia)
        for (int i : a)
            cout << i << " ";
    cout << endl;
    cout << "======================" << endl;
    for (size_t i = 0; i < 3; ++i)
        for (size_t j = 0; j < 4; ++j)
            cout << ia[i][j] << " ";
    cout << endl;
    cout << "======================" << endl;
    for (auto *a = ia; a < std::end(ia); ++a)
        for (int *i = *a; i < std::end(*a); ++i)
            cout << *i << " ";
    cout << endl;
    return 0;
}
