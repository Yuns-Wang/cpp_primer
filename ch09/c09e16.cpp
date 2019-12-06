#include <vector>
#include <list>
#include <iostream>

using std::vector;
using std::list;
using std::cout;
using std::endl;

//li < vi ==> -1
//li > vi ==> +1
//li == vi ==> 0
int compare(list<int> li, vector<int> vi)
{
    auto li_begin = li.cbegin();
    auto vi_begin = vi.cbegin();
    for (; (li_begin != li.cend()) && (vi_begin != vi.cend()); ++li_begin, ++vi_begin)
    {
        if (*li_begin > *vi_begin)
            return 1;
        else if (*li_begin < *vi_begin)
            return -1;
    }

    if ((li_begin == li.cend()) && (vi_begin == vi.cend()))
        return 0;
    else if (li_begin == li.cend())
        return -1;
    else 
        return 1;
}

int main()
{
    list<int> li1(10, 1);
    vector<int> vi2(15, 1);
    cout << compare(li1, vi2) << endl;
    cout << "=========================" << endl;
    vector<int> vi3;
    vi3.assign(li1.begin(), li1.end());
    cout << (vi3 == vi2) << endl;
    return 0;
}
