#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main()
{
    vector<int> nums{1,2,3,4,5,6,7,8,9,10};
    //初始化方法
    list<int> li{nums.rbegin() + 3, nums.rend() - 2};
    std::for_each(li.begin(), li.end(), [](const int i){cout << i << " ";});
    cout << endl;
    //copy方法
    list<int> li2(5);
    //左闭右开区间
    //copy用法，依次++第二个区间的开始迭代器 来达到写入区间内所有元素效果
    std::copy(nums.begin() + 2, nums.begin() + 8, li2.rbegin());
    std::for_each(li2.begin(), li2.end(), [](const int i){cout << i << " ";});
    cout << endl;
    return 0;
}
