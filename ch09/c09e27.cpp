#include <forward_list>
#include <iostream>

using std::forward_list;
using std::cout;
using std::endl;

int main()
{
    forward_list<int> fli{1,2,3,4,5,6,7,8,11};
    for (auto i : fli)
        cout << i << " ";
    cout << endl;
    for (auto cur = fli.begin(),prev = fli.before_begin(); cur != fli.end(); )
    {
        if (*cur % 2 == 1)
            cur = fli.erase_after(prev);
        else
        {
            ++prev;
            ++cur;
        }
    }

    for (auto i : fli)
        cout << i << " ";
    cout << endl;
    return 0;
}
