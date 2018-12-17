#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

using namespace std;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    Sales_data& combine(const Sales_data&);
    string isbn() const {return bookNo;};
};

Sales_data& Sales_data::combine(const Sales_data& s) {
    if (bookNo == s.bookNo) {
        units_sold += s.units_sold;
        revenue += s.revenue;
    } else {
        cerr << "different bookNo!" << endl;
    }
    return *this;
}

#endif