#include "Sales_item.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::istream_iterator;

bool compareIsbn(const Sales_item &sd1, const Sales_item &sd2)
{
    return sd1.isbn() < sd2.isbn();
}

int main()
{
    istream_iterator<Sales_item> sd_iter(cin), sd_iter_eof;
    vector<Sales_item> sds;
    while(sd_iter != sd_iter_eof)
        sds.push_back(*sd_iter++);
    std::sort(sds.begin(), sds.end(), compareIsbn);
    for(auto beg = sds.begin(), end = beg; beg != sds.end(); beg = end)
    {
        auto end = std::find(beg, sds.end(), [&beg](const Sales_item &sd){return beg->isbn() != sd.isbn();});
        cout << std::accumulate(beg, end, Sales_item(beg->isbn)) << endl;
    }
    return 0;
}
