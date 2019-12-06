#include <string>
#include <list>
#include <iostream>

using std::string;
using std::list;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string str;
    list<string> str_list;
    while (cin >> str)
    {
        str_list.push_back(str);
    }

    list<string>::const_iterator begin = str_list.cbegin();
    while (begin != str_list.cend())
    {
        cout << *begin << " ";
        ++begin;
    }
    cout << endl;
    return 0;
}
