#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

bool is_have_capital(const string&);
void convert_to_ordinary(string&);

int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    cout << is_have_capital(s) << endl;
    convert_to_ordinary(s);
    cout << s << endl;
    return 0;
}

bool is_have_capital(const string &s)
{
    string::const_iterator flag = s.begin();
    string::const_iterator end = s.end();
    while (flag != end)
    {
        if ( *flag > 64 && *flag < 91)
            return true;
        flag++;
    }
    return false;
}

void convert_to_ordinary(string &s)
{
    string::size_type i = 0;
    for(; i < s.size(); ++i)
    {
        if (s[i] > 64 && s[i] < 91)
            s[i] += 32;
    }
    return;
}
