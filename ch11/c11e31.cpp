#include <map>
#include <string>
#include <iostream>
#include <utility>

using std::cout;
using std::endl;
using std::pair;
using std::string;
using std::multimap;

int main()
{
    multimap<string, string> arts = {{"wang", "book1"},{"wang", "book2"},{"yun", "book3"},{"song", "book4"}};

    for (pair<const string, string> art : arts)
        cout << art.first << " : " << art.second << endl;
    cout << "=======================" << endl;

    string name = "wang";
    multimap<string, string>::iterator res = arts.find(name);
    size_t cnt = arts.count(name);
    while (cnt)
    {
        if (res != arts.end())
            res = arts.erase(res);
        cnt--;
    }
    for (pair<const string, string> art : arts)
        cout << art.first << " : " << art.second << endl;
    return 0;
}
