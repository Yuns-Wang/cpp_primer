#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<string> vs;
    string s, target = "ni";
    while (cin >> s)
        vs.push_back(s);
    //可以使用std::count 或者 count
    cout << std::count(vs.begin(), vs.end(), target) << endl;
    return 0;
}
