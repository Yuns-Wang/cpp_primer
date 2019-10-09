#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    //exercise 3.6
    string str(10, 'a');
    for (char &c : str)
        c = 'X';
    cout << str << endl;
    cout << "-------------" << endl;

    //exercise 3.8
    //string str1 = {10, 'a'};
    string str1(10, 'a');
    cout << str1 << endl;
    for (string::size_type i = 0; i < str1.size(); ++i)
    {
        str1[i] = 'X';
    }
    cout << str1 << endl;
    cout << "-------------" << endl;

    //string str2{10, 'a'};
    string str2(10, 'a');
    cout << str2 << endl;
    string::size_type cnt = 0;
    while (cnt++ < str2.size())
    {
        str2[cnt] = 'X';
    }
    cout << str2 << endl;

    return 0;
}
