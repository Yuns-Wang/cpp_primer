#include <iostream>
#include <forward_list>

using std::forward_list;
using std::cout;
using std::endl;

int main()
{
    forward_list<int> fli = {2,4,6,7,9,10};
    
    for(int i : fli)
        cout << i << " ";
    cout << endl;

    for (auto prev = fli.before_begin(), curr = fli.begin(); curr != fli.end();)
    {
        if ((*curr % 2) == 0)
        {
            curr = fli.erase_after(prev);
        }
        else
        {
            prev = fli.insert_after(prev, *curr);
            curr = ++prev ;
            curr++;
        }
    }

    for(int i : fli)
        cout << i << " ";
    cout << endl;

    return 0;
}
