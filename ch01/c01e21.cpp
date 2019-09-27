#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Sales_item s1, s2;
    cin >> s1 >> s2;
    if (s1.isbn() == s2.isbn())
    {
        cout << s1 + s2 << endl;
    } else 
    {
        cout << "wrong input";
    }
    return 0;
}
