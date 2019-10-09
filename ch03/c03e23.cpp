#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vi{1,2,3,4,-5,-6,-7,-8,-9,-10};
    vector<int>::iterator begin = vi.begin();
    while (begin != vi.end())
    {
        *begin *= 2;
        ++begin;
    }
    for (int i : vi)
    {
        cout << i << " ";
    }
    return 0;
}
