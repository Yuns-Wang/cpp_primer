#include <string>
#include <iostream>
#include <list>
#include <algorithm>

using std::cout;
using std::string;
using std::endl;
using std::list;

bool is_longer_than_5(const string &s)
{
    return s.size() > 5;
}

int main()
{
    list<string> words = {"stabel", "sort", "back_inserter", "push", "abck()"};
    list<string>::iterator second_part_iter = std::partition(words.begin(), words.end(), is_longer_than_5);
    for(string &s : words)
        cout << s << ",";
    cout << endl;

    for(auto begin = words.begin(); begin != second_part_iter;)
        cout << *begin++ << ",";
    cout << endl;
    return 0;
}
