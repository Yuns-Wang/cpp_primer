#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;

int main()
{
    int ia[10];
    for (size_t i = 0; i < sizeof(ia)/sizeof(int); ++i)
    {
        ia[i] = i;
    }

    int *p1 = ia, *p2 = p1 + 5;
    cout << *p1 << *p2 << endl;
    p1 += p2 - p1;
    cout << *p1 << *p2 << endl;

    for (int i : ia)
        cout << i << " ";
    cout << std::endl;
    return 0;
}
