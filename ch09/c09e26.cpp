#include <vector>
#include <iostream>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main()
{
    int ia[] = {0,1,1,2,3,5,8,13,21,34,55,89};
    vector<int> vi(std::begin(ia), std::end(ia));
    list<int> li(ia, ia + sizeof(ia)/sizeof(ia[0]));

    for (auto begin = vi.begin(); begin != vi.end();)
    {
        if (*begin % 2 == 0)
            begin = vi.erase(begin);
        else 
            ++begin;
    }

    for (auto begin = li.begin(); begin != li.end();)
    {
        if (*begin % 2 != 0)
            begin = li.erase(begin);
        else 
            ++begin;
    }

    for(auto i : vi)
        cout << i << " ";
    cout << endl;
    for(auto i : li)
        cout << i << " ";
    cout << endl;
    return 0;
}
