#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, result;
    while (cin >> s)
    {
        result += s + ' ';
    }
    cout << result << endl;
    return 0;
}
