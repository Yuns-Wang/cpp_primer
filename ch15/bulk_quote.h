//
// Created by wys on 18-11-25.
//

#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <string>
#include <cstddef>
#include "quote.h"
#include "disc_quote.h"

using std::string;
using std::size_t;

class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const string &book, double sale_price, size_t min_num, double disc) : Disc_quote(book, sale_price, min_num, disc)
    {}
    /*
    string isbn() const
    {
        return "bookNo";
    }
    */
    double net_price (size_t n) const override
    {
        if (n > num) {
            return (1 - discount) * price * n;
        } else {
            return price * n;
        }
    }
    void debug() const override
    {
        cout << num << "|" << discount << endl;
    }

};
#endif //CH15_BULK_QUOTE_H
