#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <iostream>
#include <iterator>

void print_int(const int i)
{
    std::cout << i << ", ";
}
int main()
{
    std::vector<int> nums{1,2,3,4,5,6,7,8,9};

    std::list<int> il;
    auto il_iter = std::back_inserter(il);

    std::deque<int> id;
    auto id_iter = std::front_inserter(id);

    std::vector<int> iv;
    auto iv_iter = std::inserter(iv, iv.begin());

    for (const int i : nums)
    {
        il_iter = i;
        id_iter = i;
        iv_iter = i;
    }
    std::for_each(il.begin(), il.end(), print_int);
    std::cout << std::endl;
    std::for_each(id.begin(), id.end(), print_int);
    std::cout << std::endl;
    std::for_each(iv.begin(), iv.end(), print_int);
    std::cout << std::endl;
    return 0;
}
