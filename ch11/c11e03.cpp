#include <string>
#include <map>
#include <set>
#include <iostream>
#include <fstream>

using std::string;
using std::map;
using std::set;
using std::cout;
using std::endl;
using std::ifstream;

int main()
{
    ifstream ifs("../ch10/README.md");
    string s;
    map<string, int> words;
    while (ifs >> s)
        words[s]++;

    for(const std::pair<const string, int> &kv : words)
        cout << kv.first << " : " << kv.second << endl;
    return 0;
}
