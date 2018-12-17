#ifndef QUOTE_H
#define QUOTE_H

#include <string>
#include <iostream>
#include <cstddef>

using std::string;
using std::size_t;
using std::cout;
using std::endl;

class Quote {
public:
    Quote() = default;
    Quote(const string &book, double sale_price) : bookNo(book), price(sale_price) {}
    string isbn() const
    {
        return bookNo;
    }
    virtual double net_price(size_t n) const
    {
        return n * price;
    }

    virtual void debug() const
    {
        cout << bookNo << "|" << price << endl;
    }
    virtual ~Quote() = default;
private:
    string bookNo;
protected:
    double price = 0.0;
};

#endif
