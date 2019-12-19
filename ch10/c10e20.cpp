#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;
using std::string;

int main()
{
    vector<string> words{"include ", "vector", "std", "vector", "main", "s.size"};
    int length = 6;
    int cnt = std::count_if(words.begin(), words.end(), [length](const string &s){return s.size() > 6;});
    cout << cnt << endl;
    return 0;
}
