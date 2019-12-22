#include <string>
#include <vector>
#include <utility>
#include <iostream>

using std::string;
using std::vector;
using std::pair;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string s;
    int i;
    vector<pair<string, int>> vec;
    while(cin >> s >>i)
    {
        vec.push_back(make_pair(s, i));
    }

    for(const pair<string, int> p : vec)
        cout << p.first << " : " << p.second << endl;
    return 0;
}
