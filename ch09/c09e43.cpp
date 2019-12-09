#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

void func(string&, const string&, const string&);
void func2(string&, const string&, const string&);

int main()
{
    string str = "abc tho termianl thru view edit fiel";
    cout << str << endl;
    func(str, "tho", "though");
    func2(str, "thru", "through");
    cout << str << endl;
    return 0;
}

void func(string &s, const string &oldVal, const string &newVal)
{
    for(string::size_type i = 0; ; i += newVal.size())
    {
        i = s.find(oldVal, i);
        if (i == string::npos)
            break;
        s.erase(i, oldVal.size());
        s.insert(i, newVal);
    }
}

void func2(string &s, const string &oldVal, const string &newVal)
{
    for(auto begin = s.begin(); begin != s.end(); ++begin)
    {
        if (oldVal == string(begin, begin + oldVal.size()))
        {
            s.erase(begin, begin + oldVal.size());
            s.insert(begin, newVal.begin(), newVal.end());
            begin += newVal.size() - 1;
        }
    }
}
