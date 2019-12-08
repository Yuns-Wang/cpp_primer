#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

void func(string&, const string&, const string&);

int main()
{
    string str = "abc tho termianl thru view edit fiel";
    cout << str << endl;
    func(str, "tho", "though");
    func(str, "thru", "through");
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
        s.replace(i, oldVal.size(), newVal);
    }
}
