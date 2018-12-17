#include <string>
#include <iostream>
#include <cstddef>

#include "quote.h"
#include "bulk_quote.h"
#include "limited_quote.h"

using namespace std;

double print_total(ostream &os, const Quote &q, size_t n);

int main_03()
{
    Quote q("hello, abc", 12.3);
    Bulk_quote bq("hello, abc", 12.3, 10, 0.3);
    Limited_quote lq("hello, abc", 12.3, 10, 0.3);
    /*
    cout << q.isbn() << endl;
    cout << bq.isbn() << endl;
    */
    print_total(cout, q, 100);
    print_total(cout, bq, 100);
    print_total(cout, lq, 5);
    return 0;
}

double print_total(ostream &os, const Quote &q, size_t n)
{
    double money = q.net_price(n);
    os << n << "本" << q.isbn() << "共计" << money << endl;
    return money;
}
