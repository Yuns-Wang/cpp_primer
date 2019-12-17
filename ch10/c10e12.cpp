#include "../ch07/Sales_data_741.h"
#include <vector>
#include <iostream>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;

bool compareIsbn(const Sales_data &sd1, const Sales_data &sd2)
{
    return sd1.isbn() < sd2.isbn();
}

int main()
{
    vector<Sales_data> sales_datas = {Sales_data("ni"), Sales_data("wom"), Sales_data("std::"), Sales_data("istream")};
    for(auto sd : sales_datas)
    {
        print(cout, sd);
        cout << ", ";
    }
    cout << endl;
    std::sort(sales_datas.begin(), sales_datas.end(), compareIsbn);
    for(auto sd : sales_datas)
    {
        print(cout, sd);
        cout << ", ";
    }
    cout << endl;
    return 0;
}
