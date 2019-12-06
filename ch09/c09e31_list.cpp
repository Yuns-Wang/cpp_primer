#include <iostream>
#include <list>

using std::list;
using std::cout;
using std::endl;

int main()
{
    list<int> li = {2,4,6,7,9,10};
    
    for(int i : li)
        cout << i << " ";
    cout << endl;

    for (auto begin = li.begin(); begin != li.end();)
    {
        if ((*begin % 2) == 0)
        {
            begin = li.erase(begin);
        }
        else
        {
            begin = li.insert(begin, *begin);
            /*
            begin++;
            begin++;
            */
            advance(begin, 2);
        }
    }

    for(int i : li)
        cout << i << " ";
    cout << endl;

    return 0;
}
