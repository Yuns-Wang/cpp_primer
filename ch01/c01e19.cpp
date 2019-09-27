#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int first, second;
    cout << "Please input 2 numbers:" << endl;
    cin >> first >> second;
    if (first > second)
    {
        int tmp = first;
        first = second;
        second = tmp;
    } else if (first == second)
    {
        cout << "same numbers!" << endl;
    }

    while (first != second)
    {
        cout << ++first << endl;
    }
    return 0;
}
