#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;
using std::string;

void elimDups(vector<string> & words)
{
    std::stable_sort(words.begin(), words.end());
    vector<string>::iterator unique_begin = std::unique(words.begin(), words.end());
    words.erase(unique_begin, words.end());
}

void biggies(vector<string> &words, const int length)
{
    elimDups(words);
    auto second_part_start = std::partition(words.begin(), words.end(), [length](const string &s){return s.size() < length;});
    cout << "长度大于" << length << "的单词共有" << words.end() - second_part_start << "个。分别为：" << endl;
    std::for_each(second_part_start, words.end(), [](const string &s){cout << s << ", ";});
    cout << endl;
}

int main()
{
    vector<string> words{"include ", "vector", "std", "vector", "main", "s.size"};
    int length = 5;
    // 用biggies函数实现功能
    cout << "=================bigges()==================" << endl;
    biggies(words, length);
    return 0;
}
