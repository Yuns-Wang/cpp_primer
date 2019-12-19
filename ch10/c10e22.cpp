#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::bind;

using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}
int main()
{
    vector<string> words{"include ", "vector", "std", "vector", "main", "s.size"};
    int length = 6;
    auto func = bind(check_size, _1, length);
    int cnt = std::count_if(words.begin(), words.end(), func);
    cout << cnt << endl;
    return 0;
}
