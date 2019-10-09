#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    if (s1 == s2) 
        cout << s1 << " = " << s2 << endl;
    else 
        cout << (s1 > s2 ? s1 : s2) << endl;

    if (s1.size() == s2.size())
        cout << s1 << " and " << s2 << " have the same size" << endl;
    else
        cout << (s1.size() > s2.size() ? s1 : s2) << endl;
    return 0;
}
