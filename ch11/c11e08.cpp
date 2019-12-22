#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    vector<string> set_vec;
    string s;
    while (cin >> s)
    {
        if (std::find(set_vec.begin(), set_vec.end(), s) == set_vec.end())
            set_vec.push_back(s);
    }
    std::for_each(set_vec.begin(), set_vec.end(), [](const string &s){cout << s << " ";});
    return 0;
}
