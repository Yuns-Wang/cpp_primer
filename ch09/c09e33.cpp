#include <vector>
#include <iostream>

using std::vector;
using std::cout; using std::endl;

int main()
{
    vector<int> vi{1,2,3,4,5,6,7,8,9};
    for (auto begin = vi.begin(); begin != vi.end();)
    {
        ++begin;
        vi.insert(begin, 42);
        ++begin;
    }

    for (int i : vi)
        cout << i << " ";
    cout << endl;

    return 0;
}
