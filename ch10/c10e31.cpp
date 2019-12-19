#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>

using std::istream_iterator;
using std::ostream_iterator;

using std::vector;
using std::cout;
using std::endl;

int main()
{
    istream_iterator<int> is_iter(std::cin), is_iter_eof;
    ostream_iterator<int> os_iter(cout);
    vector<int> vi(is_iter, is_iter_eof);

    std::sort(vi.begin(), vi.end());
    std::unique_copy(vi.cbegin(), vi.cend(), os_iter);
    return 0;
}
