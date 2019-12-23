#include <unordered_map>
#include <string>
#include <iostream>
#include <utility>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::unordered_map;
using std::pair;

int main()
{
    unordered_map<string, size_t> words;
    string s;
    while (cin >> s)
        words[s]++;

    for (pair<const string, size_t> word : words)
        cout << word.first << " : " << word.second << endl;
    return 0;
}
