#include <iostream>
#include <cstddef>

using std::cout;

int main()
{
    int ia[10];
    for (size_t i = 0; i < sizeof(ia)/sizeof(int); ++i)
    {
        ia[i] = i;
    }

    for (int i : ia)
        cout << i << " ";
    cout << std::endl;
    return 0;
}
