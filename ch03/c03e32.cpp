#include <iostream>
#include <cstddef>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    int ia[10];
    for (size_t i = 0; i < sizeof(ia)/sizeof(int); ++i)
    {
        ia[i] = i;
    }

    int ia2[10];
    for (size_t i = 0; i < sizeof(ia2)/sizeof(int); ++i)
    {
        ia2[i] = ia[i];
    }

    for (int i : ia2)
        cout << i << " ";
    cout << std::endl;

    vector<int> iv;
    for (unsigned i = 0; i < 10; ++i)
    {
        iv.push_back(i);
    }
    for (vector<int>::size_type i = 0; i < iv.size(); ++i)
    {
        cout << iv[i] << " ";
    }
    cout << std::endl;

    vector<int> iv2(iv);
    for (vector<int>::const_iterator begin = iv2.cbegin(); begin != iv2.cend(); ++begin)
    {
        cout << *begin << " ";
    }
    cout << std::endl;
    return 0;
}
