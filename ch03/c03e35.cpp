#include <iostream>

using std::cout;
using std::endl;
using std::end;

int main()
{
    int ia[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i : ia)
        cout << i << " ";
    cout << endl;

    for (int *begin = ia; begin < end(ia); ++begin)
    {
        *begin = 0;
    }

    for (int i : ia)
        cout << i << " ";
    cout << endl;
    return 0;
}
