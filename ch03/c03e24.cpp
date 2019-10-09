#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vi;
    int i;
    while (cin >> i)
    {
        vi.push_back(i);
    }
    if (vi.size() == 0)
    {
        cout << "empty input";
        return -1;
    }
    for (vector<int>::iterator begin = vi.begin(); begin != vi.end()-1; ++begin)
    {
        cout << *begin + *(begin + 1) << endl;
    }
    for (vector<int>::iterator begin = vi.begin(), end = vi.end()-1; begin <= end; ++begin, --end)
    {
        if (begin == end)
            cout << *begin << endl;
        else
            cout << *begin + *end << endl;
    }
    return 0;
}
