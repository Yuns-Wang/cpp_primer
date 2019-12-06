#include <list>
#include <deque>
#include <iostream>

using std::deque;
using std::list;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    list<int> li{1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    deque<int> odd, even;
    for (auto begin = li.cbegin(); begin != li.cend(); ++begin)
    {
        if (*begin % 2 == 0)
            even.push_back(*begin);
        else 
            odd.push_back(*begin);
    }
    for (auto i : odd) 
        cout << i << " ";
    cout << endl;
    for (auto i : even)
        cout << i << " ";
    cout << endl;
}
