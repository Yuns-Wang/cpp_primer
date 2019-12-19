#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
    std::vector<int> nums{1,2,1,2,3,4,5,66,6,5};
    std::sort(nums.begin(), nums.end());
    std::list<int> il;
    auto il_iter = std::back_inserter(il);
    std::unique_copy(nums.begin(), nums.end(), il_iter);

    std::for_each(il.begin(), il.end(), [](const int i){std::cout << i << ", ";});
    std::cout << std::endl;
    return 0;
}
