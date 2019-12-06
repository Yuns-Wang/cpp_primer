#include <vector>
#include <iostream>

using std::vector;
using std::cerr;
using std::cout;
using std::endl;

bool contains(vector<int>::const_iterator, vector<int>::const_iterator, int);

int main()
{
    vector<int> vi(10);
    cout << contains(vi.cbegin(), vi.cend(), 0) << endl;
    return 0;
}

bool contains(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i)
{
    while (begin != end)
    {
        if (i == *begin)
        {
            return true;
        }
        ++begin;
    }
    return false;
}
