#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

bool check_size(const std::string &s, const int size)
{
    return s.size() < size;
}

int main()
{
    std::string s{"c10e24"};
    std::vector<int> nums{1,2,23,44,85,116,47,87,9,90,100};
    auto iter = std::find_if(nums.begin(), nums.end(), bind(check_size, s, std::placeholders::_1));
    std::cout << *iter << std::endl;
    return 0;
}
