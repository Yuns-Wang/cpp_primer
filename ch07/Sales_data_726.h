#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data;
std::istream &read(std::istream &is, Sales_data&);

class Sales_data {
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::istream &read(std::istream &is, Sales_data &s);
    friend std::ostream &print(std::ostream&, const Sales_data&);
    public:
	Sales_data() = default;
	Sales_data(std::string s, unsigned n, double d) : bookNo(s), units_sold(n), revenue(n * d){}
	Sales_data(std::istream &is)
	{
        read(is, *this);
	}
	Sales_data(std::string s) : bookNo(s) {}

    Sales_data& combine(const Sales_data&);
    std::string isbn() const {return bookNo;};

    private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const;
};

Sales_data add(const Sales_data &a, const Sales_data &b)
{
    Sales_data sum;
    if (a.isbn() == b.isbn())
    {
        sum.bookNo = a.bookNo;
        sum.units_sold = a.units_sold + b.units_sold;
        sum.revenue = a.revenue + b.revenue;
    } else {
        std::cerr << "can only add two Sales_data with the same bookNo" << std::endl;
    }
    return sum;
}

inline double Sales_data::avg_price() const
{
    return (units_sold ? revenue/units_sold : 0);
}
Sales_data& Sales_data::combine(const Sales_data& s) {
    if (bookNo == s.bookNo) {
        units_sold += s.units_sold;
        revenue += s.revenue;
    } else {
        std::cerr << "different bookNo!" << std::endl;
    }
    return *this;
}

std::istream &read(std::istream &is, Sales_data &s)
{
    double price;
    is >> s.bookNo >> s.units_sold >> price;
    s.revenue = price * s.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &s)
{
    os << s.bookNo << " " << s.units_sold << " " << s.revenue;
    return os;
}
#endif
