#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

using std::list;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    list<int> nums{1,2,3,4,0,5,6,7,0,8,0,9,10};
    auto rpos = std::find(nums.rbegin(), nums.rend(), 0);
    cout << *rpos << *--rpos;
    //cout << *rpos << *(rpos+1);错误用法,因为list forward_list的迭代器不支持+ - 操作，内存不连续，不能实现远距离查找
    cout << endl;

    vector<int> nums_v{1,2,3,4,0,5,6,7,0,8,0,9,10};
    auto rpos_v = std::find(nums_v.rbegin(), nums_v.rend(), 0);
    cout << *rpos_v << *--rpos_v;
    cout << endl;
    cout << *rpos_v << *(rpos_v+1);//正确用法,因为vector内存连续，能实现远距离查找
    cout << endl;
    return 0;
}
