#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

void elimDups(vector<string> &words)
{
    std::stable_sort(words.begin(), words.end(), isShorter);
    for (string s : words)
        cout << s << " ";
    cout << endl;
    auto end_iter = std::unique(words.begin(), words.end());
    cout << words.size() << endl;
    for (string s : words)
        cout << s << ",";
    cout << endl;
    words.erase(end_iter, words.end());
}

int main()
{
    vector<string> words = {"in", "file", "git", "status", "origin", "git", "add", "file"};
    for (string s : words)
        cout << s << " ";
    cout << endl;
    elimDups(words);
    for (string s : words)
        cout << s << " ";
    cout << endl;
    return 0;
}
