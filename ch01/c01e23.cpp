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
        int cnt = 1;
        while (cin >> s_next) 
        {
            if (s_next.isbn() == s.isbn())
                ++cnt;
            else
            {
                cout << s << " appears " << cnt << " times!" << endl;
                s = s_next;
                cnt = 1;
            }
        }
        cout << s << " appears " << cnt << " times!" << endl;
    }
    return 0;
}
