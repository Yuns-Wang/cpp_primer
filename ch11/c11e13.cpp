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
        vec.push_back(std::make_pair(s, i));
        //vec.push_back(pair<string, int>(s, i));
        //vec.push_back({s, i});
        //vec.emplace(s,i);//the easiest way
    }

    for(const pair<string, int> p : vec)
        cout << p.first << " : " << p.second << endl;
    return 0;
}
