#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Sales_item s;
    while (cin >> s)
    {
        cout << s << endl;
    }
    return 0;
}
