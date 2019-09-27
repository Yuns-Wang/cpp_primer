#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Sales_item s, s_next;
    if (cin >> s) 
    {
        while (cin >> s_next) 
        {
            if (s_next.isbn() == s.isbn())
                s += s_next;
            else
            {
                cout << s << endl;
                s = s_next;
            }
        }
        cout << s << endl;
    } else {
        std::cerr << "No data";
        return -1;
    }
    return 0;
}
