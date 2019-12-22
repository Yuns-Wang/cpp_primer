#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <utility>

using std::map;
using std::pair;
using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
    map<string, vector<pair<string, string>>> families;
    families["tian"] = {};
    families["wang"].push_back(std::make_pair("ys","19911221"));
    families["wang"].push_back(pair<string, string>("tx", "19910206"));
    families["wang"].push_back({"ts", "19950501"});
    families["wang"].emplace_back("wyy", "19950206");
    for(auto &family : families)
    {
        cout << family.first << " :\n";
        for (auto &child : family.second)
            cout << child.first << " : " << child.second << ", ";
        cout << endl;
    }

    return 0;
}
