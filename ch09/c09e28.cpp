#include <iostream>
#include <forward_list>
#include <string>

using std::forward_list;
using std::string;
using std::cout;
using std::endl;

void func(forward_list<string> &, const string &, const string &);

int main()
{
    forward_list<string> fl_str{"q","w","e"};
    for (auto str : fl_str)
        cout << str << " ";
    cout << endl;

    func(fl_str, "k", "7");

    for (auto str : fl_str)
        cout << str << " ";
    cout << endl;
    return 0;
}

void func(forward_list<string> &fls, const string &s1, const string &s2)
{
    auto cur = fls.begin();
    auto prev = fls.before_begin();
    for (;cur != fls.end();)
    {
        if (*cur == s1)
        {
            fls.insert_after(cur, s2);
            return;
        }
        else
        {
            ++cur;
            ++prev;
        }
    }
    fls.insert_after(prev, s2);
    return;
}
