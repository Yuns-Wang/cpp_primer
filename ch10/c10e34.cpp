#include <vector>
#include <iostream>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> nums{1,2,3,4,5,6,7,8,9,10};
    std::for_each(nums.crbegin(), nums.crend(), [](const int i){cout << i << " ";});
    cout << endl;
    return 0;
}
