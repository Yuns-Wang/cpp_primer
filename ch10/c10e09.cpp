#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void elimDups(vector<string> &words)
{
    std::sort(words.begin(), words.end());
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
