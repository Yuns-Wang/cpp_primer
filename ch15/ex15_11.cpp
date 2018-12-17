#include <string>
#include <cstddef>
#include <iostream>

#include "quote.h"
#include "bulk_quote.h"
#include "limited_quote.h"

using namespace std;

void print_debug(Quote *q_addr)
{
    q_addr->debug();
}
int main2()
{
    Quote q("quote", 12.3);
    Bulk_quote bq("bulk_quote", 23.4, 10, 0.2);
    Limited_quote lq("limited_quote", 34.5, 20, 0.4);

    Quote *aq = &q;
    q.debug();
    aq->debug();
    print_debug(aq);

    aq = &bq;
    bq.debug();
    aq->debug();
    print_debug(aq);

    aq = &lq;
    lq.debug();
    aq->debug();
    print_debug(aq);

    return 0;
}
