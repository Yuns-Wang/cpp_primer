#include <vector>
#include <list>
#include <iostream>

using std::vector;
using std::list;
using std::endl;
using std::cout;

int main()
{
    list<int> li(10, 1);
    vector<int> vi(10, 2);

    vector<double> vd1(li.begin(), li.end());
    vector<double> vd2(vi.begin(), vi.end());

    for (auto d : vd1)
    {
        cout << d;
    }
    cout << endl;

    for (auto d : vd2)
    {
        cout << d;
    }
    cout << endl;
    return 0;
}
