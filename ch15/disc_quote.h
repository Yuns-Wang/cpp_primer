#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H

#include <cstddef>
#include "quote.h"

using std::size_t;

class Disc_quote : public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const string &s, double pri, size_t n, double disc) : Quote(s, pri), num(n), discount(disc) {}
    double net_price (size_t n) const override = 0;

protected:
    size_t num = 0;
    double discount = 0.0;
};

#endif // DISC_QUOTE_H
