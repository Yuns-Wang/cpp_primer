#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    string line;
    vector<string> vs;
    while (getline(cin, line))
        vs.push_back(line);

    vector<string>::iterator begin = vs.begin();

    while (begin != vs.end())
    {
        for(char &c : *begin)
        {
            if (isalpha(c))
                c = toupper(c);
        }
        ++begin;
    }

    for (string s : vs)
    {
        cout << s << " ";
    }
    return 0;
}
