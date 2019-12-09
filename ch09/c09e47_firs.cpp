#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s = "ab2c3d7R4E6";
    string nums = "0123456789";
    string abs{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    for(string::size_type i = 0; i < s.size(); ++i)
    {
        i = s.find_first_of(nums, i);
        if (i == string::npos)
            break;
        cout << "数字：" << s[i] << endl;
    }
    for(string::size_type i = 0; i < s.size(); ++i)
    {
        i = s.find_first_of(abs, i);
        if (i == string::npos)
            break;
        cout << "字母：" << s[i] << endl;
    }
    return 0;
}
