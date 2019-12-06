#include <string>
#include <deque>
#include <iostream>

using std::string;
using std::deque;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string str;
    deque<string> str_deq;
    while (cin >> str)
    {
        str_deq.push_back(str);
    }

    deque<string>::const_iterator begin = str_deq.cbegin();
    while (begin != str_deq.cend())
    {
        cout << *begin << " ";
        ++begin;
    }
    cout << endl;
    return 0;
}
