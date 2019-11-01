#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
    }
    return 0;
}
