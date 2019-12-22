#include <string>
#include <map>
#include <set>
#include <iostream>
#include <fstream>
#include <cctype>

using std::string;
using std::map;
using std::set;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;

string &pros(string &s)
{
    for(string::size_type begin = 0, end = s.size(); begin != end; end = s.size())
    {
        if (isupper(s[begin]))
            s[begin] = tolower(s[begin]);
        else if (ispunct(s[begin]))
        {
            s.erase(begin,1);
            --begin;
        }

        ++begin;
    }
    return s;
}

int main()
{
    string s;
    map<string, int> words;
    while (cin >> s)
    {
        words[pros(s)]++;
    }

    for(const std::pair<const string, int> &kv : words)
        cout << kv.first << " : " << kv.second << endl;
    return 0;
}
