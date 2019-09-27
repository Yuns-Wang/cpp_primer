#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Sales_item s, sum;
    if (cin >> sum) 
    {
        while (cin >>s) 
        {
            if (sum.isbn() == s.isbn())
                sum += s;
            else
                std::cerr << "not same isbn";
        }
        cout << sum << endl;
    }
    return 0;
}
