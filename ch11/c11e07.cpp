#include <map>
#include <vector>
#include <string>
#include <iostream>

using std::map;
using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
    map<string, vector<string>> families;
    families["tian"] = {};
    families["wang"].push_back("ys");
    families["wang"].push_back("tx");
    for(auto &family : families)
    {
        cout << family.first << " :\n";
        for (auto &child : family.second)
            cout << child << ", ";
        cout << endl;
    }
    return 0;
}
