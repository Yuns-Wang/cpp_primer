#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string input;
    cin >> input;
    cout << input << endl;
    string result;
    for (char c : input)
    {
        if (!ispunct(c))
            result += c;
    }
    cout << result << endl;
    return 0;
}
