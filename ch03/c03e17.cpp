#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::vector;
using std::string;

int main()
{
    vector<string> vs;
    string s;
    while (cin >>s)
    {
        vs.push_back(s);
    }

    for (string &si : vs)
    {
        for (char &ci : si)
        {
            ci = toupper(ci);
        }
    }
    std::cout << std::endl;
    for (string si : vs)
        std::cout << si << std::endl;
    return 0;
}
