#ifndef LIMITED_QUOTE_H
#define LIMITED_QUOTE_H

#include <string>
#include <cstddef>
#include "quote.h"
#include "disc_quote.h"

using std::string;
using std::size_t;

class Limited_quote : public Disc_quote {
public:
    Limited_quote() = default;
    Limited_quote(const string &book, double sale_price, size_t max_num, double disc) :
        Disc_quote(book, sale_price, max_num, disc) {}
    double net_price(size_t n) const override
    {
        if (n > num) {
            return price * (n - num) + price * num * (1 - discount);
        } else {
            return price * n * (1 - discount);
        }
    }

    void debug() const override
    {
        cout << num << "|" << discount << endl;
    }
};

#endif // LIMITED_QUOTE_H
