#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1(10, 'm');
    string s2 = "hello";
    cout << (s1 > s2) << endl;

    char c1[] = "nihao";
    char c2[] = "woyehao";
    auto result = strcmp(c1, c2);
    cout << result << endl;
    return 0;
}
